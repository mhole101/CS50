#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string key);
char rotate(char pChar, int charInt);

char UPPERCASE_ARRAY[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char LOWERCASE_ARRAY[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int main(int argc, string argv[])
{
    printf("argc: %i\n", argc);

    // Check that user input is correct
    if (argc == 2)
    {
        // Checks that key is numeric
        if (only_digits(argv[1]))
        {
            // Converts key string to int
            int key = atoi(argv[1]);
            printf("key: %i\n", key);

            // Prompt user for plaintext
            string plaintext = get_string("plaintext:  ");

            printf("ciphertext: ");

            char

            for (int i = 0; i < strlen(plaintext); i++)
            {

            }

            return 0;

        }
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }


    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

}

bool only_digits(string key)
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

char rotate(char pChar, int charInt)
{
    //
    int charMath = pChar;

    if (pChar >= 65 && pChar <= 90)
    {
        // Convert Upper
        charMath -= 65;
        printf("charMath: %i\n", charMath);

    }
    else if (pChar >= 97 && pChar <= 122)
    {
        // Convert Lower
        charMath -= 97;
        printf("charMath: %i\n", charMath);
    }
    else
    {
        // Return character if not letter
        return pChar;
    }

}



