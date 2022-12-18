#include <cs50.h>
#include <stdio.h>

long getCreditCardNum(void);
int getCreditCardNumLen(long creditCardNum);

int main(void)
{

    //Prompt user for creditcard number
    long creditCardNum = getCreditCardNum();
    printf("Number: %li\n",creditCardNum);

    //Get credit card length
    int creditCardLen = getCreditCardNumLen(creditCardNum);
    printf("Credit Card Length: %i\n", creditCardLen);

    //Check credit card length for pass/fai
    //Visa Check
    if(creditCardLen == 13)
    {
        //VisaFirstDigitCheck
            //if(visaFirstDigit == 4)
            //  run alg
            //      if alg = pass
            //          result = "VISA\n";
            //      esle
            //          results = "INVALID\n"
    }
    else if (creditCardLen == 15)
    {
        //mastercardFirstDigitCheck
    }
    /*
    if(creditCardLen==13 || creditCardLen==15 || creditCardLen==16 )
    {
        printf("Pass!\n");
    }
    else
    {
        printf("Fail!\n");
    }
    printf("Number: %li\n",creditCardNum);
    /*
    while(creditCardNum)
    {

        printf("%li\n", creditCardNum % 10);
        creditCardNum /= 10;

    }
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