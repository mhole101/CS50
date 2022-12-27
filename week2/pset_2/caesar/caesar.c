#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

bool keyIsNum(string key);
int keyCheck(int argc, string argv[]);

int main(int argc, string argv[])
{
    printf("argc: %i\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%i]: %s\n", i, argv[i]);
    }

    return 0;

}

bool keyIsNum(string key)
{
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isdigit(key[i]))
        return 1;
    }

    return 0;
}

int keyCheck(int argc, string argv[])
{
    if (argc == 2)
    {

    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    return 0;
}