#include <cs50.h>
#include <stdio.h>

long getCreditCardNum(void);
int getCreditCardNumLen(long creditCardNum);

int main(void)
{

    \\Prompt user for creditcard number
    long creditCardNum = getCreditCardNum();
    printf("Number: %li\n",creditCardNum);

    //Get credit card length
    int creditCardLen = getCreditCardNumLen(creditCardNum);
    printf("Credit Card Length: %i\n", creditCardLen);

    /*
    while(creditCardNum)
    {

        printf("%li\n", creditCardNum % 10);
        creditCardNum /= 10;
        i++;
    }
     printf("i = %i\n", i);
     */
}

long getCreditCardNum(void)
{
    long creditCardNum = get_long("Number: ");
    return creditCardNum;
}

int getCreditCardNumLen(long creditCardNum)
{
    int creditCardLen = 0;
     while(creditCardNum)
    {
        creditCardNum /= 10;
        creditCardLen++;
    }

    return creditCardLen;
}