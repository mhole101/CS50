#include <cs50.h>
#include <stdio.h>

long getCreditCardNum(void);

int main(void)
{

    long creditCardNum = getCreditCardNum();
    printf("Number: %li\n",creditCardNum);
}

long getCreditCardNum(void)
{
    long creditCardNum = get_long("Number: ");
    return creditCardNum;
}