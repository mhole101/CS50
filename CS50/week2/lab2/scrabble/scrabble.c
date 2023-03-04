#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print the winner
    if(score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if(score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else if(score1 == score2)
    {
        printf("Tie!\n");
    }
    else
    {
        printf("Error\n");
        return 1;
    }

    return 0;
}

int compute_score(string word)
{
    // Compute and return score for string
    int score = 0;

    // index through string
    for (int i = 0; i < strlen(word); i++)
    {
        // adds 0 to score if char is not alpha
        if (isalpha(word[i]))
        {
            // Converts char to uppercase
            char upperChar = toupper(word[i]);

            // Gets POINTS array inex value from char
            int pointsIndexNum = upperChar - 65;

            // Adds char value to score
            score += POINTS[upperChar - 65];
        }
        else
        {
            // Adds 0 to score
            score += 0;
        }
    }

    return score;
}
