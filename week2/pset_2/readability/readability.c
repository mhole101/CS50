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
    // Get text
    string text = get_string("Text: ");

    // Get letter count from text
    int letters = count_letter(text);

    // Get word count from text
    int words = count_words(text);

    // Get sentence count from text
    int sentences = count_sentences(text);

    // Average number of letter per 100 words
    // Must explicitly convert words int to double to get decimal values
    double avgLetters = letters / (double)words * 100;

    // Average number of sentenances per 100 words
    // Must explicitly convert words int to double to get decimal values
    double avgSentences = sentences / (double)words * 100;

    // Coleman-Liau index
    //index = 0.0588 * L - 0.296 * S - 15.8
    // Round Coleman-Liau Index into index variable
    double index = round(0.0588 * avgLetters - 0.296 * avgSentences - 15.8);

    // Print grade based off of index
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", (int)index);
    }


}

int count_letter(string text)
{
    int letters = 0;

    // Index through text string
    for (int i = 0; i < strlen(text); i++)
    {
        // If char is a letter add to total letters
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
        // Add to total words if whitespace is detected
        if (isspace(text[i]))
        {
            words += 1;
        }
        // Add to total words if null char is detected
        // Used to detect last word of text
        else if (text[i] == 0)
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