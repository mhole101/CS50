#include <cs50.h>
#include <stdio.h>

long getCreditCardNum(void);
int getCreditCardNumLen(long creditCardNum);
long getFirstDigit(long creditCardNum, int creditCardLen);
long getSecondDigit(long creditCardNum, int creditCardLen);
bool visaCheck(int firstDigit);
bool amexCheck(int firstDigit, int secondDigit);
bool masterCardCheck(int firstDigit, int secondDigit);
bool luhnsAlgorithm(long creditCardNum);

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
        long firstDigit = getFirstDigit(creditCardNum, creditCardLen);
        printf("firstdigit: %li\n", firstDigit);
        if(firstDigit == 4)
        {
            //alg
            results = "VISA\n";

        }
        else
        {
            results = "INVALID1\n";
        }
    }
    else if(creditCardLen == 15)
    {
        long firstDigit = getFirstDigit(creditCardNum, creditCardLen);
        printf("firstdigit: %li\n", firstDigit);
        if(firstDigit == 3)
        {
            //alg
            results = "AMEX\n";

        }
        else
        {
            results = "INVALID3\n";
        }
    }
    else if (creditCardLen == 16)
    {

    }
    else
    {
        results = "INVALID2\n";
    }

    printf("%s", results);

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

long getFirstDigit(long creditCardNum, int creditCardLen)
{
    int i = 0;
    long firstDigit = 0;
    while(creditCardNum)
    {
        if((creditCardLen - i) == 1)
        {
            printf("firstdigit: %li\n", creditCardNum);
            firstDigit = creditCardNum;
        }
        creditCardNum /= 10;
        i++;
    }
    return firstDigit;

}

long getSecondDigit(long creditCardNum, int creditCardLen)
{
    int i = 0;
    long secondDigit = 0;
    while(creditCardNum)
    {
        if((creditCardLen - i) == 2)
        {
            printf("secondDigit: %li\n", creditCardNum);
            secondDigit = creditCardNum;
        }
        creditCardNum /= 10;
        i++;
    }
    return secondDigit;
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

bool luhnsAlgorithm(long creditCardNum)
{
    return true;
}