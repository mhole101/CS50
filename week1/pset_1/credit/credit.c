#include <cs50.h>
#include <stdio.h>

long getCreditCardNum(void);

int main(void)
{

    long creditCardNum = getCreditCardNum();
    printf("Number: %li\n",creditCardNum);

    while(creditCardNum)
    {
        printf("%li\n", creditCardNum % 10);
        creditCardNum /= 10;
    }
}

long getCreditCardNum(void)
{
    long creditCardNum = get_long("Number: ");
    return creditCardNum;
}