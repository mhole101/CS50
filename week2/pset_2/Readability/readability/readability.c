#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int grade = 17;
    string text = get_string("Text: ");

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