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

    int faultCode = keyCheck(argc, argv);

    // debug to test faultCode and keyCheck
    if (!faultCode)
    {
        int key = atoi(argv[1]);
        printf("key: %i\n", key);

        string plaintext = get_string("plaintext:  ");

        string ciphertext = "ciphertext";
        printf("ciphertext: %s\n", ciphertext);

        return 0;
    }


    return 1;

}

bool keyIsNum(string key)
{
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isdigit(key[i]))
        {
            return 0;
        }

    }

    return 1;
}

int keyCheck(int argc, string argv[])
{
    if (argc == 2)
    {
        // Check key in numeric
        if (!keyIsNum(argv[1]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }

        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    return 0;
}