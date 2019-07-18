# RE-Help

These are command line tools and commands that I find helpful when performing RE

#### Converting HEX into String using python

> 1. First you will need python 2.27
>
> ```bash
> sudo apt install python
> ```
>
> 1. Now you can try and decode any HEX value
>
> ```bash
> python -c "print(' *HEXVALUE* '.decode('hex'))"
> ```
>
>    - an example with output from crackme0x00a: [challenges.zip](security.cs.rpi.edu/courses/binexp-spring2015/lectures/2/challenges.zip)
>    - This also serves as the solution to the problem.
>
> ```bash
> python -c "print('673030644a30422100'.decode('hex'))"
> 
> > g00dJ0B!
> ```
>
>    - You can also feed it directly into the crackme
>
> ```bash
> python -c "print('673030644a30422100'.decode('hex'))" | ./crackme0x00a
> 
> Enter password: Congrats!
> ```

#### Converting HEX into INT using python

> 1. Make sure python 2.7 is installed
>
> ```bash
> sudo apt install python
> ```
>
> 2. Now decode HEX value into INT
>
> ```bash
> python -c "print(int(' *HEXVALUE* ', base=16))"
> ```
>
>    - an example with output from crackme0x01
>    - This also serves as the solution to the problem.
>
> ```bash
> python -c "print(int('149a', base=16))"
> ```
>
>    - You can also feed it directly into the crackme
>
> ```bash
> python -c "print(int('149a', base=16))" | ./crackme0x01
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

