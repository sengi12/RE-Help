# RE-Help

These are command line tools and commands that I find helpful when performing RE

#### Converting HEX into String using python

> 1. First you will need Python 3 (`python3 --version` to check; most systems already ship it)
>
> ```bash
> sudo apt install python3
> ```
>
> 2. Now you can try and decode any HEX value
>
> ```bash
> python3 -c "print(bytes.fromhex('*HEXVALUE*').decode())"
> ```
>
>    - an example with output from crackme0x00a: [challenges.zip](https://web.archive.org/web/20200818074206id_/http://security.cs.rpi.edu/courses/binexp-spring2015/lectures/2/challenges.zip) (the original RPI host is gone; this is the Wayback Machine copy)
>    - This also serves as the solution to the problem.
>
> ```bash
> python3 -c "print(bytes.fromhex('673030644a30422100').decode())"
> 
> > g00dJ0B!
> ```
>
>    - You can also feed it directly into the crackme. Write the raw bytes to stdout so nothing gets re-encoded on the way (the trailing `00` is the C string terminator)
>
> ```bash
> python3 -c "import sys; sys.stdout.buffer.write(bytes.fromhex('673030644a30422100'))" | ./crackme0x00a
> 
> Enter password: Congrats!
> ```

#### Converting HEX into INT using python

> 1. Make sure Python 3 is installed
>
> ```bash
> sudo apt install python3
> ```
>
> 2. Now decode HEX value into INT
>
> ```bash
> python3 -c "print(int('*HEXVALUE*', 16))"
> ```
>
>    - an example with output from crackme0x01
>    - This also serves as the solution to the problem.
>
> ```bash
> python3 -c "print(int('149a', 16))"
> 
> > 5274
> ```
>
>    - You can also feed it directly into the crackme
>
> ```bash
> python3 -c "print(int('149a', 16))" | ./crackme0x01
> 
> IOLI Crackme Level 0x01
> Password: Password OK :)
> ```

#### Setting an environment variable

> So for crackme0x06 we need to get this below code to return a 1:
>
> ```asm
> iVar1 = strncmp(*(char **)(iVar1 + mainP3),"LOLO",3);
> while (iVar1 != 0);
> return 1;
> ```
>
> In this instance we are casting `(iVar1 + mainP3)` as a character and then checking to see if it matches the first 3 char's of `"LOLO"`.
>
> `iVar1` is a local int variable, while `mainP3` is a parameter passed into the original main function.
>
> In order for this to work we need to set the environment variable `LOL`
>
> Which is simply done by the following code:
>
> ```bash
> export LOL=something
> ```

#### Various Compilation/Disassembling techniques

> Let's consider a couple different compilers… gcc vs. llvm (clang). Linux vs. OS X.
>
> 1. Compile a .c program
>
>    ```bash
>    gcc -o example example.c
>    ```
>
> 2. Compile a .cpp program
>
>    ```bash
>    g++ -o example example.cpp
>    ```
>
> 3. Disassemble a program to specifying <u>x86 intel ASM</u>:
>
> ```bash
> gcc -O2 -fstack-protector example.c -S -masm=intel -o -
> ```
>
> 4. Disassemble a binary program specifying <u>x86 AT&T ASM</u>:
>
> ```bash
> objdump example -disassemble
> ```

