#include <cs50.h>
#include <stdio.h>

long getCreditCardNum(void);
int getCreditCardNumLen(long creditCardNum);
long fillArray(long numToArray, int numLen)[];
bool luhnsAlgorithm(long creditCardNum, int creditCardLen);


int main (void)
{
    long creditCardNum = getCreditCardNum();
    int creditCardLen = getCreditCardNumLen(creditCardNum);
    printf("creditCardNum: %li\n", creditCardNum);
    printf("creditCardLen: %i\n", creditCardLen);
    long creditCardArray[creditCardLen];
    int arraySize = sizeof creditCardArray / sizeof *creditCardArray;
    printf("arraySize: %i\n", arraySize);
    bool pass = luhnsAlgorithm(creditCardNum, creditCardLen);

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

long fillArray(long numToArray, int numLen)[]
{
    int i = 0;
    long creditCardArray[creditCardLen];
    while(creditCardNum)
    {
        printf("%i:\n", i);
        printf("  %li\n", creditCardNum % 10);
        creditCardArray[i] = creditCardNum % 10;
        creditCardNum /= 10;
        i++;
    }
}

bool luhnsAlgorithm(long creditCardNum, int creditCardLen)
{
    int i = 0;
    long creditCardArray[creditCardLen];
    while(creditCardNum)
    {
        printf("%i:\n", i);
        printf("  %li\n", creditCardNum % 10);
        creditCardArray[i] = creditCardNum % 10;
        creditCardNum /= 10;
        i++;
    }
    i = 0;
    while(i < creditCardLen)
    {
        printf("creditCardArray[%i]:", i);
        printf(" %li\n", creditCardArray[i]);
        i++;
    }
    return true;
}



