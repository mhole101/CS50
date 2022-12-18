#include <cs50.h>
#include <stdio.h>

long getCreditCardNum(void);
int getCreditCardNumLen(long creditCardNum);
long getFirstDigit(long creditCardNum, int creditCardLen);
long getFirstTwoDigits(long creditCardNum, int creditCardLen);
bool luhnsAlgorithm(long creditCardNum);
string visaCheck(long creditCardNum, int creditCardLen);
string amexCheck(long creditCardNum, int creditCardLen);
string masterCardCheck(long creditCardNum, int creditCardLen);


int main(void)
{
    string results = "NOPE";

    //Prompt user for creditcard number
    long creditCardNum = getCreditCardNum();
    printf("Number: %li\n",creditCardNum);

    //Get credit card length
    int creditCardLen = getCreditCardNumLen(creditCardNum);
    printf("Credit Card Length: %i\n", creditCardLen);

    //Check credit card length for pass/fail

    if(creditCardLen == 13)
    {
        //Visa check
        results = visaCheck(creditCardNum, creditCardLen);
    }
    else if(creditCardLen == 15)
    {
        //AMEX check
        results = amexCheck(creditCardNum, creditCardLen);
    }
    else if (creditCardLen == 16)
    {
        long firstDigit = getFirstDigit(creditCardNum, creditCardLen);
        //Check first digit
        if(firstDigit == 4)
        {
            results = visaCheck(creditCardNum, creditCardLen);
        }
        else if(firstDigit == 5)
        {
            //Mastercard Check
            results = masterCardCheck(creditCardNum, creditCardLen);
        }
        else
        {
            results = "INVALID\n";
        }
    }
    else
    {
        results = "INVALID2\n";
    }

    printf("%s", results);
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

long getFirstTwoDigits(long creditCardNum, int creditCardLen)
{
    int i = 0;
    long secondDigit = 0;
    while(creditCardNum)
    {
        if((creditCardLen - i) == 2)
        {
            printf("secondDigit: %li\n", creditCardNum);
            secondDigit = creditCardNum;
            break;
        }
        creditCardNum /= 10;
        i++;
    }
    return secondDigit;
}

bool luhnsAlgorithm(long creditCardNum)
{
    return true;
}

string visaCheck(long creditCardNum, int creditCardLen)
{
    long firstDigit = getFirstDigit(creditCardNum, creditCardLen);
    if(firstDigit == 4)
    {
        return "VISA\n";
    }
    else
    {
        return "INVALID V1\n";
    }
}

string amexCheck(long creditCardNum, int creditCardLen)
{

    long firstTwoDigits = getFirstTwoDigits(creditCardNum, creditCardLen);
    printf("firstTwoDigits: %li\n", firstTwoDigits);
    if(firstTwoDigits == 34 || firstTwoDigits == 37)
    {
        return "AMEX\n";
    }
    else
    {
        return "INVALID A1\n";
    }
}

string masterCardCheck(long creditCardNum, int creditCardLen)
{
    long firstTwoDigits = getFirstTwoDigits(creditCardNum, creditCardLen);
    printf("firstTwoDigits: %li\n", firstTwoDigits);
    if(firstTwoDigits >= 51 && firstTwoDigits <= 55)
    {
        return "MASTERCARD\n";
    }
    else
    {
        return "INVALID M1\n";
    }
}

