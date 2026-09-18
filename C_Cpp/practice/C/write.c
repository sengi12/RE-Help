#include <stdio.h>
#include <stdlib.h>

int main()
{
    // r = read
    // w = write (create or write to a new file)
    // a = append
    // you can do this to any file type
    FILE * fpointer = fopen("employees.txt", "a");

    fprintf(fpointer, "Kelly, Customer Service\nMichael, Boss\nCreed, Something\n");

    fclose(fpointer);

    return 0;
}