#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    // single character, integer type
    char letter = 'A'; // 65

    // string literal, stored as read-only data
    char *name1 = "Engineer Man"; // gives you a ptr to the first letter in string

    // character array initialized from string literal, copied to and stored on the stack
    char name2[] = "Engineer Man"; // Editable later in program

    // exact same as above
    char name3[] = { 'E', 'n', 'g', 'i', 'n', 'e', 'e', 'r', ' ', 'M', 'a', 'n', '\0'};

    // pointer to char, holds up to 128 elements, stored on stack
    char name4[128];

    // copy string literal into name4, 12 bytes + 1 for null terminator
    strcpy(name4, "Engineer Man");
    printf("\nname4 = %s\n\n", name4); // Engineer Man
    strlen(name4); // 12

    // access elements -- arr[index] => *(arr + index)
    char E = name4[0]; // E
    char E1 = *(name4 +0); // E
    char E2 = 0[name4]; // E
    char E3 = *(0 + name4); // E

    printf("Accessing Elements:\n");
    printf("E: name4[0] = %c\n", E);
    printf("E1: *(name4 +0) = %c\n", E1);
    printf("E2: 0[name4] = %c\n", E2);
    printf("E3: (0 + name4) = %c\n\n", E3);

    // modify elements
    name4[8] = '-';
    *(name4 + 8) = '-';
    8[name4] = '-';
    *(8 + name4) = '-';

    // name4 = Engineer-Man

    printf("Modifying Elements:\n");
    printf("name4[8] = '-';\n");
    printf("*(name4 + 8) = '-';\n");
    printf("8[name4] = '-';\n");
    printf("*(8 + name4) = '-';\n");
    printf("\n");
    printf("These all give this same output: %s\n\n", name4);

    // change the boundary of string
    name4[8] = '\0';
    printf("Change the boundary of a string: \n");
    printf("name4[8] = \'\\0\' changes the boundary to the following:\n%s\n", name4);

    strlen(name4); // 8

    return EXIT_SUCCESS;
}