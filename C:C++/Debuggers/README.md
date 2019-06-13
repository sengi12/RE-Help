# How C++ Debuggers work?

- What is a debugger?
- Platform introduction (x86 Linux)
- Breakpoints
- Stepping
- Registers and Memory 
- Stack Unwinding
- Expression Evaluation
- Multi-threaded Applications
- Shared Libraries
- Remote Debugging

## What is a Debugger?

`Applications used to test and debug other applications`

Most Common Operations:

	- Breakpoints
	- Stepping
	- Expression Evaluation
	- View Backtrace

## Platform Introduction

- Linux - OS
- x86_64 - Architecture
- ELF - main object file formats/debug info formats
- DWARF - ''
- ptrace - Linux's OS level debug interface

**E**xecutable and **L**inkable **F**ormat - Architecture independant way of expressing some kind of binary

- ELF Header 
  - Architecture it's running on
  - Information about the program itself
- Then a bunch of sections:
  - Program Header Table
  - Code

Check out ELF specification for details*

Debug Information Format - DWARF

- Dwarf Information Entries (DIE)
  - Tag - What kind of entity is being represented
  - Attributes - what compiler produced it, language info, name of the file, PC ranges, etc. 
  - Line # Information - Debugger must map HIGH level source code to LOW level instructions running on your machine

OS Debug Library - Ptrace 

`long ptrace(enum __ptrace_request request, pid_t pid, void *addr, void *data);`

4 arguments:

- enumerator - tells ptrace what to do
- process id
- address 
- data

EXAMPLES:

`PTRACE_TRACEME` - allow tracing

- allow parent process to trace me, read memory, registers

`PTRACE_PEEKDATA` - read memory

`PTRACE_POKEDATA` - write memory

`PTRACE_GETREGS` - read registers

`PTRACE_SETREGS` - write registers

*You cannot create a breakpoint with ptrace, that is a higher level command that can be accomplished using these low level operations.

## Breakpoints

EXAMPLE: 

```x86 assembly
55							push %rbp

48	89	e5			mov %rsp, %rsp <— Desired Breakpoint

48	83	ec	10	sub $0x10,%rsp
```

---

```x86 assembly
55							push %rbp

48<	89	e5			??? #remember 48

48	83	ec	10	sub $0x10,%rsp
```

---

```x86 assembly
55							push %rbp

cc	89	e5			int3 				# modify the binary, still remember 48

48	83	ec	10	sub $0x10,%rsp
```

`0xcc` is a special instruction in x86 and it will trigger a software interrupt

---

Knowing that the OS has registered all of it's interrupt handlers when starting up, we know that when it reaches this line the OS will trigger a unique interrupt handler for **int3**

---

in Linux, the OS will trigger SIGTRAP which is a interrupt handler.

---

So Overall: 

1. Debugger will wait for input from user
2. Debugger will continue the binary
3. Debugger will now WAIT for pid to start back up
4. Binary starts up
5. Binary reaches 0xcc and initiates software interrupt
6. software interrupt sends SIGTRAP to Debugger
7. Debugger says "I got a signal!" and displays corresponding output based on interrupt
   - why did I get this specific signal?
   - was it a breakpoint? single step?
   - where is the program stopped?

#### How do we Break Main:

> you can't simply say "Debugger, break on main". the Debugger doesn't know what main is. 
>
> You need to consult DWARF information

Looking at DWARF, we see:

DW_TAG_subprogram

​	DW_AT_low_pc						0x00400670 <— Location of main

​	DW_AT_high_pc					   0x0040069c

​	DW_AT_frame_base				 DW_OP_reg6

​	DW_AT_name						   main

​	DW_AT_decl_file					   0x00000001 example.cpp

​	DW_AT_decl_line					  0x00000001

​	DW_AT_type							 <0x00000077>

​	DW_AT_external						yes(1)

> So we can set a break point at low_pc

#### How do we Break a source line:

> break foo.cpp:4 
>
> You need to consult the line table information
>
> set a software breakpoint at line 4 of foo.cpp 

#### Hardware Breakpoints

> (Very very Hardware specific)
>
> Set special-purpose registers with address breakpoint
>
> Can break on: Read, Write, Execute 

## Stepping

Assembly:

	- Instruction

High-level source

	- Step over
	- Step in
	- Step out

#### Instruction Step

`ptrace(PTRACE_SINGLESTEP, debuggee_pid, nullptr, nullptr);`

#### Step Out

Set breakpoint on return address

#### Step In

- Step in to function calls
- Set breakpoint at return address
- Set breakpoint at next instruction
  - What is next instruction?

#### Step Over

- Step over function calls
- Set breakpoint at return address
- Set breakpoint at next instruction in this function
  - What is next instruction

## Registers and Memory

`user_regs_struct regs;`  // Get Registers

`ptrace(PTRACE_GETREGS, pid, nullptr, &regs);`

`regs.rip = 0x42;` // Set Registers

`ptrace(PTRACE_SETREGS, pid, nullptr, &regs);` 

*MOST of this happens behind the scenes within the debugger

`auto data = ptrace(PTRACE_PEEKDATA, m_pid, address, nullptr);`

`ptrace(PTRACE_POKEDATA, m_pid, address, nullptr);`

R/W a word at a time….. not a good idea if you have a lot of data to R/W

`iovec local_iov {&t, sizeof(T)};`

`iovec remote_iov {(void*)addr, sizeof(T)};`

`unsigned long n = 1;`

`unsigned long flags = 0;`

`process_vm_readv(m_pid, &local_iov, n, &remote_iov, n, flags);`

## Stack Unwinding

Let's say you have an instruction that is called as such:

Set break point at foo… how did we get here?

`void foo() { cout << "hi"; }`

`void bar() { foo(); }`

`void baz() { bar(); }`

1. First you will be given the stack fram for foo but you have the previous instructions BP (hopefully)
2. Use PBP (Previous BP) to get to previous stack frame….
3. This stack fram has no name… how do we know where we are… Go to the return address in the first stack frame and get the debug DWARF info… Now we know this is bar!
4. Repear step 2 with this stack frame and now we are in the previous stack from from bar…. how do we know where we are? Go to the return address in the second stack fram and get the debug DWARF info…. Now we know this is baz!

It ties back to DWARF and Stack Frame addresses.

## Expression Evaluation

 to be continued…