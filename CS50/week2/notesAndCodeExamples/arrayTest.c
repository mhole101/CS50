#include <cs50.h>
#include <stdio.h>

long getCreditCardNum(void);
int getCreditCardNumLen(long creditCardNum);
//long fillArray(long numToArray, int numLen)[];
int oddNum(int num);
bool luhnsAlgorithm(long creditCardNum, int creditCardLen);
bool luhnsAlg(long creditCardNum);


int main (void)
{
    long creditCardNum = getCreditCardNum();
    int creditCardLen = getCreditCardNumLen(creditCardNum);
    printf("creditCardNum: %li\n", creditCardNum);
    printf("creditCardLen: %i\n", creditCardLen);
    long creditCardArray[creditCardLen];
    int arraySize = sizeof creditCardArray / sizeof *creditCardArray;
    printf("arraySize: %i\n", arraySize);
    //bool pass = luhnsAlgorithm(creditCardNum, creditCardLen);
    bool pass = luhnsAlg(creditCardNum);
    if(pass)
    {
        printf("YES\n");
    }


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
    int multTwoSum = 0;


    for(int k = 0; k < creditCardLen; k++ )
    {
        printf("sum: %i\n", sum);
        //Indexes through every other
        if(oddNum(k))
        {
            multTwoSum = creditCardArray[k] * 2;
            printf("multTwoSum: %i\n", multTwoSum);

            if(multTwoSum > 9)
            {
                int multTwoSumTemp;
                while(multTwoSum)
                {

                    //Loads CC number into array starting with last number
                    multTwoSumTemp = multTwoSum % 10;
                    multTwoSum /= 10;
                    printf("multTwoSumTemp: %i:\n", multTwoSumTemp);
                    sum += multTwoSumTemp;
                }
            }
            else
            {
                //adds multTwoSum if 9 or less
                sum += multTwoSum;
            }
        }
        else
        {
            //adds digits not multiplied by two
            sum += creditCardArray[k];
        }
    }

    printf("sum: %i\n", sum);

    return true;
}

bool luhnsAlg(long creditCardNum)
{
    int temp;
    int sum = 0;
    int multTwoSum;
    int i = 0;

    while(creditCardNum)
    {
        //Moves last digit of CC number into temp
        temp = creditCardNum % 10;

        //Select between everyother number
        if(i%2)
        {
            multTwoSum = temp * 2;
            //if multTwoSum > 9 parse number and add to sum
            if(multTwoSum > 9)
            {
                int multTwoSumTemp;
                while(multTwoSum)
                {
                    //Puts last digit of multTwoSum into multTwoSumTemp
                    multTwoSumTemp = multTwoSum % 10;
                    multTwoSum /= 10;
                    sum += multTwoSumTemp;
                }
            }
            else
            {
                //adds multTwoSum to sume if 9 or less
                sum += multTwoSum;
            }
        }
        else
        {
            //adds numbers from cc not multiplied by two
            sum += temp;
        }

        //removes last number from card when done with it
        creditCardNum /= 10;
        i++;

    }

    int lastDigitOfSum = sum % 10;

    if(lastDigitOfSum)
    {
        return false;
    }
    else
    {
        return true;
    }

}






