#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Business");

    printf("%s is a %s major\nhe is %d and has a %f gpa\n", student1.name, student1.major, student1.age, student1.gpa);

    struct Student student2;
    student2.age = 20;
    student2.gpa = 2.5;
    strcpy(student2.name, "Pam");
    strcpy(student2.major, "Art");

    printf("%s is a %s major\nhe is %d and has a %f gpa\n", student2.name, student2.major, student2.age, student2.gpa);

    return 0;
}