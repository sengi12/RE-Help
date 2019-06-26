#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNum = 5;
    int guess;
    int count = 0;

    while(guess != secretNum && count < 3)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        count++;
    }
    if(count < 3){
        printf("You Win!\n");
    } else printf("You ran out of guesses...\n");
    return 0;
}