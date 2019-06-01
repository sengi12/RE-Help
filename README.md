# RE-Help

These are command line tools commands that I find helpful when performing RE

#### FIRST OFF is how we can easily decode HEX values on the command line as Strings.

> 1. First you will need python 2.27
>
>    `$ sudo apt install python`
>
>    
>
> 2. Now you can try and decode any HEX value
>
>    `$ python -c "print(' *HEXVALUE* '.decode('hex'))"`
>
>    - an example with output from crackme0x00a: [challenges.zip](security.cs.rpi.edu/courses/binexp-spring2015/lectures/2/challenges.zip)
>    - This also serves as the solution to the problem.
>
>    `$ python -c "print('673030644a30422100'.decode('hex'))"`
>
>    `> g00dJ0B!`
>
>    
>
>    - You can also feed it directly into the crackme
>
>    `$ python -c "print('673030644a30422100'.decode('hex'))" | ./crackme0x00a`
>
>    `> Enter password: Congrats!`

#### NOW that was converting HEX into Strings, what about converting HEX into INT?

> 1. Make sure python 2.7 is installed
>
>    `$ sudo apt install python`
>
>    
>
> 2. Now decode HEX value into INT
>
>    `$ python -c "print(int(' *HEXVALUE* ', base=16))"`
>
>    - an example with output from crackme0x01
>    - This also serves as the solution to the problem.
>
>    `$ python -c "print(int('149a', base=16))"`
>
>    
>
>    - You can also feed it directly into the crackme
>
>    `$ python -c "print(int('149a', base=16)) | ./crackme0x01`
>
>    `> IOLI Crackme Level 0x01`
>
>    `> Password: Password OK :)`

#### Let's set an environment variable!

> So for crackme0x06 we need to get this below code to return a 1:
>
> `    iVar1 = strncmp(*(char **)(iVar1 + mainP3),"LOLO",3);
>   while (iVar1 != 0);
>   return 1;`
>
> In this instance we are casting `(iVar1 + mainP3)` as a character and then checking to see if it matches the first 3 char's of `"LOLO"`.
>
> `iVar1` is a local int variable, while `mainP3` is a parameter passed into the original main function.
>
> In order for this to work we need to set the environment variable `LOL`
>
> Which is simply done by the following code:
>
> `export LOL=something` 
