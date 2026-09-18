#include <stdio.h>
#include <stdlib.h>

int main()
{
    char color[10];
    char pluralNoun[10];
    char celebrityF[10];
    char celebrityL[10];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a pluralNoun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityF, celebrityL);


    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);
}