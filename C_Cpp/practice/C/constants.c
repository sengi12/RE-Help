#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variables that cannot change
    const int favNumber = 5;

    printf("number = %d\n", favNumber);
    //number = 8;

    printf("UPDATED\nnumber = %d\n", favNumber);

    return 0;
}