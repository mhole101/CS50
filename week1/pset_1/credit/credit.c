#include <cs50.h>
#include <stdio.h>

long getCreditCardNum(void);
int getCreditCardNumLen(long creditCardNum);
int getFirstDigit(int creditCardNum);
int getSecondDigit(int creditCardNum);
bool visaCheck(int firstDigit);
bool amexCheck(int firstDigit, int secondDigit);
bool masterCardCheck(int firstDigit, int secondDigit);
bool luhnsAlgorithm(int creditCardNum);

int main(void)
{
    string results = "NOPE";

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
            //if(visaFirstDigit == 1)
            //  run alg
            //      if alg = pass
            //          result = "VISA\n";
            //      else
            //          results = "INVALID\n"
    }
    else if (creditCardLen == 15)
    {
        //mastercardFirstDigitCheck
        //  if(mastercardFirstDigitCheck == 1)
        //      run alg
        //          if alg = pass
        //          result = "VISA\n";
        //      else
        //          results = "INVALID\n"
    }
    else if (creditCardLen == 16)
    {

    }
    else
    {
        results = "INVALID\n";
        printf("%s", results);
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

int getFirstDigit(int creditCardNum)
{
    return 1;

}

int getSecondDigit(int creditCardNum)
{
    return 1;
}

bool visaCheck(int firstDigit)
{
    if(firstDigit == 4)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool amexCheck(int firstDigit, int secondDigit)
{
    if(firstDigit == 3)
    {
        if(secondDigit == 4 || secondDigit == 7)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    else
    {
        return false;
    }
}

bool masterCardCheck(int firstDigit, int secondDigit)
{
    if(firstDigit == 5)
    {
        if(secondDigit >= 1 && secondDigit <= 7)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    else
    {
        return false;
    }
}

bool luhnsAlgorithm(int creditCardNum)
{
    return true;
}