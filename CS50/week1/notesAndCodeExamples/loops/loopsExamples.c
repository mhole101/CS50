// Content taken from week 1 loops
//
//  while - use when you want a loop to repeat an
//          unknown number of times,
//          and possibly not at all
//
//  do-while - use when you wanta loop to repeat an
//             unknown number of times,
//             but at least once.
//
//  for -   use when you want a loop to repeat a
//          discrete number of times, though you
//          may not know the number at the moment
//          the program is compiled.
//
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // while loop
    // loop runs one more time than y
    // x set to y+1 after loop
    int x = 0;
    int y = get_int("enter a number between 1 and 4\n");
    while (x<=y)
    {
        printf("x is %i\n", x);
        x++;
    }
    printf("out of while loop x is %i\n", x);

    // do-while loop
    // loop runs one more time than y
    // x2 set to y2+1 after loop
    int x2 = 0;
    int y2= get_int("enter a number between 1 and 4\n");
    do
    {
        printf("x2 is %i\n", x2);
        x2++;
    }
    while (x2<=y2);
    printf("out of  do-while loop x2 is %i\n", x2);

    //for loop
    // loop runs one more time than y3
    int y3= get_int("enter a number between 1 and 4\n");
    for (int i = 0; i <= y3; i++)
    {
       printf("i is %i\n", i);
    }
    //printf("out of for loop i is %i\n", xi);

}