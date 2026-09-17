#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void selectSort(int sortThis[100], int l)
{
    for (int i = 0; i < l; i++)
    {
        int low = sortThis[i];
        int index = i;

        for (int j = i; j < l; j++)
        {
            if (sortThis[j] < low)
            {
                low = sortThis[j];
                index = j;
            }
        }
        sortThis[index] = sortThis[i];
        sortThis[i] = low;
        printf("SWAPPED %i with %i\n", sortThis[i], sortThis[index]);
    }
    
    for (int i = 0; i < l; i++)
    {
        printf("Index %i: %i\n", i, sortThis[i]);
    }

    
}

int main()
{
    int sortThis[100] = {77, 8, 32, 99, 42, 12, 49, 55, 38, 79, 66, 2, 90, 1, 58, 50, 29, 27, 88, 81};
    
    selectSort(sortThis, 20);

    return 0;
}