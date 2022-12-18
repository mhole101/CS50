#include <cs50.h>
#include <stdio.h>

int getHeight(void);
void printEmptySpaces(int spaces);

int main(void)
{
    //prompt user for height
    int h = getHeight();

    for(int i =1; i <= h; i++) // moves along height
    {
       int spaces = h-i;
       int blocks = i;
       printEmptySpaces(spaces);

       while(blocks>0) // prints first stairs blocks
       {
        printf("#");
        blocks--;
       }
       printf("  "); // prints spaces between stairs
       blocks =i;
       while(blocks>0) // prints second stairs blocks
       {
        printf("#");
        blocks--;
       }
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
