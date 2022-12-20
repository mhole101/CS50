#include <cs50.h>
#include <stdio.h>

long getCreditCardNum(void);
int getCreditCardNumLen(long creditCardNum);
//long fillArray(long numToArray, int numLen)[];
int oddNum(int num);
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

/*
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
*/

int oddNum(int num)
{
    return num % 2;
}

bool luhnsAlgorithm(long creditCardNum, int creditCardLen)
{
    int i = 0;
    long creditCardArray[creditCardLen];
    while(creditCardNum)
    {
        //Loads CC number into array starting with last number
        creditCardArray[i] = creditCardNum % 10;
        creditCardNum /= 10;
        i++;
    }

    //Prints out array
    for(int j = 0; j < creditCardLen; j++)
    {
        printf("creditCardArray[%i]:", j);
        printf(" %li\n", creditCardArray[j]);
    }

    int sum = 0;
    int multTwoSum;


    for(int k = 0; k < sizeOfCreditCardArray; k++ )
    {
        if(oddNum(k))
        {
            multTwoSum = creditCardArray[k] * 2;
            printf("multTwoSum: %i\n", multTwoSum);
        }
    }



    /*
    //Puts size of CC array in variable
    int sizeOfCreditCardArray = sizeof creditCardArray / sizeof *creditCardArray;
    //determines size of eveyother array for declaration
    int sizeOfEveryOtherArray = sizeOfCreditCardArray/2;
    printf("sizeOfEveryOtherArray: %i\n", sizeOfEveryOtherArray);
    //declares everyotherarray
    long everyOtherArray[sizeOfEveryOtherArray];
    int eOArrayIndex = 0;

    //Creates everyOtherArray
    for(int k = 0; k < sizeOfCreditCardArray; k++ )
    {
        if(oddNum(k))
        {
            everyOtherArray[eOArrayIndex] = creditCardArray[k];
            eOArrayIndex++;
        }
    }

      //Prints out array
    for(int l = 0; l < sizeOfEveryOtherArray; l++)
    {
        printf("everyOtherArray[%i]:", l);
        printf(" %li\n", everyOtherArray[l]);
    }

    */

    // USE > than 10 while iterating through array to determine if number is larger than 9 (1 digit)

    return true;
}



