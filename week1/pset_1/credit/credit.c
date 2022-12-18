#include <cs50.h>
#include <stdio.h>

long getCreditCardNum(void);
int getCreditCardNumLen(long creditCardNum);
long getFirstDigit(long creditCardNum, int creditCardLen);
long getSecondDigit(long creditCardNum, int creditCardLen);
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
        /*
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
        */
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

    long firstDigit = getFirstDigit(creditCardNum, creditCardLen);
    long secondDigit = getSecondDigit(creditCardNum, creditCardLen);
    printf("firstDigit: %li\n", firstDigit);
    printf("secondDigit: %li\n", secondDigit);
    if(firstDigit == 3)
    {
        if(secondDigit == 4 || secondDigit == 7)
        {
            //alg
            return "AMEX\n";
        }
        else
        {
            return "INVALID A2\n";
        }
     }
     else
     {
        return "INVALID A1\n";
     }
}

string masterCardCheck(long creditCardNum, int creditCardLen)
{
    long firstDigit = getFirstDigit(creditCardNum, creditCardLen);
    long secondDigit = getSecondDigit(creditCardNum, creditCardLen);
    printf("firstDigit: %li\n", firstDigit);
    printf("secondDigit: %li\n", secondDigit);
    if(firstDigit == 5)
    {
        if(secondDigit >= 1 && secondDigit <= 7)
        {
            return "MASTERCARD\n";
        }
        else
        {
            return "INVALID M1\n";
        }

    }
    else
    {
        return "INVALID M2\n";
    }
}

