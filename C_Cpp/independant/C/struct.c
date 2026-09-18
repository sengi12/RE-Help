#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    int age;
    char *name;
    // char array
};

/*
typedef struct {
    int age;
    char *name;
    // char array
} person;

using this above you will only need the below line to instantiate a new person:
person <NAME>;
 */

int main(void)
{
    //declare new struct entity
    struct person re;

    //set some data
    re.age = 32;
    re.name = malloc( 6 * sizeof(char) );
    //allocating 6 bytes on the heap
    strcpy(re.name, "Brian");
    //copying string letter word brian into name

    printf("\nhere is the regular persons name: %s\n", re.name);
    printf("here is the regular persons age: %i\n\n", re.age);

    //create a pointer to struct
    struct person *reptr = &re;

    //set some data again
    (*reptr).age  = 33;
    //NEED parenthesis otherwise it will try to de-reference the whole thing
    (*reptr).name = realloc( (*reptr).name, 7 * sizeof(char));
    strcpy((*reptr).name, "Brian!");

    printf("here is the pointer persons name: %s\n", re.name);
    printf("here is the pointer persons age: %i\n\n", re.age);

    reptr->age = 34;
    reptr->name = realloc( reptr->name, 8 * sizeof(char));
    strcpy(reptr->name, "Brian!!");

    printf("here is the better pointer persons name: %s\n", re.name);
    printf("here is the better pointer persons age: %i\n\n", re.age);

    return 0;

}