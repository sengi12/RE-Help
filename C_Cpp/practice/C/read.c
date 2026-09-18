#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");

    // destination, size, source
    fgets(line, 255, fpointer);
    printf("%s", line);
    fgets(line, 255, fpointer);
    printf("%s", line);
    fgets(line, 255, fpointer);
    printf("%s", line);
    fgets(line, 255, fpointer);
    printf("%s", line);
    fgets(line, 255, fpointer);
    printf("%s", line);
    fgets(line, 255, fpointer);
    printf("%s", line);
    fgets(line, 255, fpointer);
    printf("%s", line);
    fgets(line, 255, fpointer);
    printf("%s", line);

    fclose(fpointer);
    return 0;
}