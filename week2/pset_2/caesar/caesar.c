#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    printf("argc: %i\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%i]: %s\n", i, argv[i]);
    }

    return 0;

}