#include <cs50.h>
#include <stdio.h>

int getHeight(void);
void printEmptySpaces(int spaces);
void printBlocks(int blocks);
void printSpacesBetweenStairs(int stairsGap);

int main(void)
{
    //prompt user for height
    int h = getHeight();

    int stairsGap = 2;

    for(int i =1; i <= h; i++) // moves along height
    {
       int spaces = h-i;
       int blocks = i;

       //Prints first staircase
       printEmptySpaces(spaces);

       //Prints first staircase
       printBlocks(blocks);

       //Prints spaces between stairs
       printSpacesBetweenStairs(stairsGap);

       //Prints second staircase
       printBlocks(blocks);

       //Prints return for next level
       printf("\n");


    }


}

int getHeight(void)
{
     int h = 0;
     while(h<1 || h>8)
    {
        h = get_int("Height (between 1 and 8): ");
    }
    return h;

}

void printEmptySpaces(int spaces)
{
    while(spaces>0)
       {
        printf(" ");
        spaces--;
       }
}

void printBlocks(int blocks)
{
    while(blocks>0)
       {
        printf("#");
        blocks--;
       }
}

void printSpacesBetweenStairs(int stairsGap)
{
    while(stairsGap>0)
    {
        printf(" ");
        stairsGap--;
    }
}
