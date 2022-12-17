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
    int x = 1;
    int y = get_int("enter a number between 1 and 4\n");
    while (x<y)
    {
        printf("x is %i\n", x);
        x++;
    }

}