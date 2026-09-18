#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int * pAge = &age;

    double gpa = 3.4;
    double * pGpa = &gpa;

    char grade = 'A';
    char * pGrade = &grade;
    
    // & gives the address to the data
    // * de-references the given address
    // you can stack these like so... &*&*&*...

    printf("age:\t%d\n", *&age);
    printf("gpa:\t%f\n", *&gpa);
    printf("grade:\t%c\n", *&*&grade); 

    printf("----------------------\n");

    printf("age:\t%p\n", pAge);
    printf("gpa:\t%p\n", pGpa);
    printf("grade:\t%p\n", &*pGrade); 

    return 0;
}