#include <cs50.h>
#include <stdio.h>

long getCreditCardNum(void);

int main(void)
{

    long creditCardNum = getCreditCardNum();
    printf("Number: %li\n",creditCardNum);

    int i = 0;

    while(creditCardNum)
    {

        printf("%li\n", creditCardNum % 10);
        creditCardNum /= 10;
        i++;
    }
     printf("i = %i/", i);
}

long getCreditCardNum(void)
{
    long creditCardNum = get_long("Number: ");
    return creditCardNum;
}