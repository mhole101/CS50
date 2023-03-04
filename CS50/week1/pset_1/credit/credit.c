#include <cs50.h>
#include <stdio.h>

long getCreditCardNum(void);
int getCreditCardNumLen(long creditCardNum);
long getFirstDigit(long creditCardNum, int creditCardLen);
long getFirstTwoDigits(long creditCardNum, int creditCardLen);
bool luhnsAlg(long creditCardNum);
string visaCheck(long creditCardNum, int creditCardLen);
string amexCheck(long creditCardNum, int creditCardLen);
string masterCardCheck(long creditCardNum, int creditCardLen);


int main(void)
{
    string results = "NOPE";

    //Prompt user for creditcard number
    long creditCardNum = getCreditCardNum();

    //Get credit card length
    int creditCardLen = getCreditCardNumLen(creditCardNum);

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
        results = "INVALID\n";
    }

    printf("%s", results);
}

//Gets credit card number from user
long getCreditCardNum(void)
{
    //Prompts user for credit card number
    long creditCardNum = get_long("Number: ");
    return creditCardNum;
}

//Takes CC number and returns CC number length
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

//Gets the first digit from CC number
long getFirstDigit(long creditCardNum, int creditCardLen)
{
    int i = 0;
    long firstDigit = 0;
    while(creditCardNum)
    {
        if((creditCardLen - i) == 1)
        {
            firstDigit = creditCardNum;
        }
        creditCardNum /= 10;
        i++;
    }
    return firstDigit;

}

//Gets first two digits from CC number
long getFirstTwoDigits(long creditCardNum, int creditCardLen)
{
    int i = 0;
    long firstTwoDigits = 0;
    while(creditCardNum)
    {
        if((creditCardLen - i) == 2)
        {
            firstTwoDigits = creditCardNum;
            break;
        }
        creditCardNum /= 10;
        i++;
    }
    return firstTwoDigits;
}

//Performs Luhn's Algorithm on CC number
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

    //Gets last digit from sum
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

//Checks for valid visa CC number
string visaCheck(long creditCardNum, int creditCardLen)
{
    bool valid = false;
    long firstDigit = getFirstDigit(creditCardNum, creditCardLen);
    if(firstDigit == 4)
    {
        if(luhnsAlg(creditCardNum))
        {
            return "VISA\n";
        }
        else
        {
            return "INVALID\n";
        }

    }
    else
    {
        return "INVALID\n";
    }
}

string amexCheck(long creditCardNum, int creditCardLen)
{

    long firstTwoDigits = getFirstTwoDigits(creditCardNum, creditCardLen);
    if(firstTwoDigits == 34 || firstTwoDigits == 37)
    {
        if(luhnsAlg(creditCardNum))
        {
            return "AMEX\n";
        }
        else
        {
            return "INVALID\n";
        }
    }
    else
    {
        return "INVALID\n";
    }
}

//Checks for valid mastercard CC number
string masterCardCheck(long creditCardNum, int creditCardLen)
{
    long firstTwoDigits = getFirstTwoDigits(creditCardNum, creditCardLen);
    if(firstTwoDigits >= 51 && firstTwoDigits <= 55)
    {
        if(luhnsAlg(creditCardNum))
        {
            return "MASTERCARD\n";
        }
        else
        {
            return "INVALID\n";
        }
    }
    else
    {
        return "INVALID\n";
    }
}

