#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long creditCardNum = get_long("Number: ");
    printf("Number: %li\n",creditCardNum);
}

long getCreditCardNum()