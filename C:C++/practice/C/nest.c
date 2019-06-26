#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 3 Elements in Array, 2 in each array within the BIG array
    int nums[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("nums[%d][%d] = %d\n", i, j, nums[i][j]);
        }
        printf("--------------\n");
    }

    return 0;
}