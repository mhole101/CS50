#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char test = 'A';
    //int charTest = test;
    printf("test: %c\n", test);
    //printf("test: %i\n", test);

    if (test == 65)
    {
        printf("YES\n");
    }
}