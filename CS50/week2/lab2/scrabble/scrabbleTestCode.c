#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{

    string word1 = get_string("Player 1: ");

    int wordLen = strlen(word1);

    printf("word1 length: %i\n", wordLen);

    for (int i = 0; i <= strlen(word1); i++)
    {
        int charValue = word1[i];
        printf("word1[%i]: %c = %i\n", i, word1[i], charValue);
    }

}