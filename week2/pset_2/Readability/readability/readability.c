#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int count_letter(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    int grade = 17;
    string text = get_string("Text: ");

    int letters = count_letter(text);
    printf("%i letters\n", letters);

    int words = count_words(text);
    printf("%i words\n", words);

    int sentences = count_sentences(text);
    printf("%i sentences\n", sentences);

    // Average number of letter per 100 words
    double avgLetters = letters / words * 100;

    // Average number of sentenances per 100 words
    double avgSentences = sentences / words * 100;

    // Coleman-Liau index
    //index = 0.0588 * L - 0.296 * S - 15.8
    double index = round(0.0588 * avgLetters - 0.296 * avgSentences - 15.8);
    printf("index: %f\n", index);


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

int count_sentences(string text)
{
    int sentences = 0;

    // Index through string
    for (int i = 0; i < strlen(text); i++)
    {
        // Increment number of sentences
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences += 1;
        }
    }

    return sentences;

}