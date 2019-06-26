#include <stdio.h>
#include <stdlib.h>

void sayHi(char name[], int age)
{
    printf("Hello There %s, you are %d\n", name, age);
}

int main()
{
    sayHi("Michael", 23);
    sayHi("Tom", 24);
    sayHi("John", 67);
    return 0;
}
