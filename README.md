# RE-Help

These are command line tools commands that I find helpful when performing RE

#### FIRST OFF is how we can easily decode HEX values on the command line.

> 1. First you will need python 2.27
>
>    `sudo apt install python`
>
> 2. Now you can try and decode any HEX value
>
>    `python -c "print('*HEXVALUE*'.decode('hex'))"`
>
>    - an example with output from crackme0x00a: [challenges.zip](security.cs.rpi.edu/courses/binexp-spring2015/lectures/2/challenges.zip)
>    - This also serves as the solution to the problem.
>
>    `$ python -c "print('673030644a30422100'.decode('hex'))"
>    g00dJ0B!`


