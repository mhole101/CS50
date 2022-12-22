#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    printf("argc: %i\n", argc);
    int i = 0;
    while(i < argc)
    {
        printf("%s\n", argv[i]);
        i++;
    }

}