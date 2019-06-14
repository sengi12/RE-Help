#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
Buffer Overflow occurs when you've allocate a certain amount of memory but write more data than that allocated memory can hold.

EXAMPLE: allocating 12 bytes, writing 16 bytes to it.

Once you've done so, you've now corrupted your stack or heap

Anything can happen after a buffer overflow including:
- nothing
- memory corruption without crash
- memory corruption with crash
- etc.
*/

int main(void)
{
    //stack corruption
    char buf2[16] = "overwriteme";
    //slightly less than 16 bytes but it doesn't matter
    char buf1[16];
    //uninitialized

    strncpy(buf1, "12345678901234567890", 15);
    //writing to buf1

    printf("buf1 val: %s\n", buf1);
    printf("buf2 val: %s\n", buf2);
    printf("buf1 addr: %p\n", (void *)buf1);
    printf("buf2 addr: %p\n", (void *)buf2);

    // TO RUN : gcc -o bufferOVF. bufferOVF.c -fno-stack-protector && clear && ./bufferOVF.

    printf("\n");
    
    //heap corruption
    char *buf3 = malloc(12*sizeof(char));
    char *buf4 = malloc(12*sizeof(char));

    strcpy(buf4, "mywordshere");
    strncpy(buf3, "12345678901234567890123456", 12);

    printf("buf3 val: %s\n", buf3);
    printf("buf4 val: %s\n", buf4);
    printf("buf3 addr %p\n", (void *)buf3);
    printf("buf4 addr %p\n", (void *)buf4);
     
}

