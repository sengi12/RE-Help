#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // PEMDAS can be used in printing (5.0 + 4.5)
    // 5 / 4 = 1 (%d)
    // 5 / 4.0 = 1.25 (%f)
    
    // math functions to know
        // pow -> first # raised to the second # gives decimal
        // sqrt -> sqaure root of input
        // ceil -> round up
        // floor -> round down
    printf("%f\n", pow(2, 3));
    printf("%f\n", sqrt(16));

    return 0;
}