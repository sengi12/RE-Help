#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 
    int age;
    printf("Enter your age: ");
    // %d what type of variable, &age is where to put it
    scanf("%d", &age);

    printf("You are %d years old.\n", age);
    */

    /*
    double gpa;
    printf("Enter your gpa: ");
    // %f what type of variable, &gpa is where to put it
    scanf("%lf", &gpa);

    printf("Your GPA is %f.\n", gpa);
    */

   /* 
    char grade;
    printf("Enter your grade: ");
    // %c what type of variable, &grade is where to put it
    scanf("%c", &grade);

    printf("Your grade is %c.\n", grade);

    */

    /* 
    char name[20];
    printf("Enter your name: ");
    // %f what type of variable, &gpa is where to put it
    scanf("%s", name);

    printf("Your name is %s.\n", name);
    */

    char name[20];
    printf("Enter your name: ");
    // name of variable, char limit, get it from std input 
    fgets(name, 20, stdin);

    // fgets records ENTER key in input of name
    printf("Your name is %s.\n", name);


    return 0;
}