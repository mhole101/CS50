#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h =0;
    while(h<1 || h>8)
    {
        h = get_int("Height (between 1 and 8): ");
    }


    for(int i =1; i <= h; i++) // moves along height
    {
       int null = h-i;
       int blocks =i;
       while(null>0) // prints first stairs emplty spaces
       {
        printf(" ");
        null--;
       }
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
