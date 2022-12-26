#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_letter(string text);
int count_words(string text);

int main(void)
{
    int grade = 17;
    string text = get_string("Text: ");

    for (int i = 0; i <= strlen(text); i++)
    {
        printf("text[%i]: %c = %i\n", i, text[i], text[i]);
    }

    int letters = count_letter(text);
    printf("%i letters\n", letters);

    int words = count_words(text);
    printf("%i words\n", words);

    if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade: %i\n", grade);
    }


}

int count_letter(string text)
{
    int letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters += 1;
        }
    }

    return letters;
}

int count_words(string text)
{
    int words = 0;
    //indexes through string
    for (int i = 0; i <= strlen(text); i++)
    {
        if (isspace(text[i]))
        {
            words += 1;
        } else if (text[i] == 0)
        {
            words += 1;
        }
    }

    return words;


}