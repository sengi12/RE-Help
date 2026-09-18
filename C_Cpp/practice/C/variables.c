#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[] = "Tom";
    int age = 67;

    printf("There once was a man named %s\n", name);
    printf("He was %d years old\n", age);
    age++;
    printf("He really liked the name %s\n", name);
    printf("But did not like being %d\n", age);
    return 0;
}