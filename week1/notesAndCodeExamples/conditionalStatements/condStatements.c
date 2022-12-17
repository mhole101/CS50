// These notes were created with the content from
// week 1 videos data types, operators, conditional statements
//
// Data Types
//      int - 32 bits/4 bytes
//       range: -2^31 - (2^31)-1
//
//      unsigned int - unsigned is a quantifier that can be
//                      can be used to certain types of data
//                      which effectively doubles the positive
//                      range of variables of that type, at the
//                      cost of disallowing any negative values
//                      Range 0 to (2^32)-1
//
//      char - 8bits,1 byte; used to store single character
//              Range -128(-2^7) to 127((2^7)-1)
//
//      float - 32bits/4bytes stores real nubmers (decimal)
//
//      double - 64bits/8bytes
//                 double is used for variable that will store
//                 store floating-point values.
//                  doubles have double precision
//
//      bool - 1bit?; true or fause; must use #include <cs50.h>
//
//      string - store series of characters; must use #include <cs50.h>
//
//      int number; //declaration
//      number = 17;// assignment
//      char letter;
//      letter = 'H';
//
//      If you are simultaneously declaring and setting the value of a
//      variable (sometimes called initializing) you can consolidate
//      into one step
//
//      int number = 17; // initialization
//      char letter = 'H";
//
//  Arithmetic operators
//
//      add - +
//      subtract - -
//      multiply - *
//      divide - /
//
//      % modulus - remainder when number on left is divided by number on right
//      Ex: int m = 13 % 4; // m is now 1
//
//      Shorthand
//
//      x = x * 5;
//      x *= 5; // x = x * 5;
//
//      incrementing or decrementing
//
//      X++; // increment x by 1
//      x--; // decrement x by 1
//
// Boolean Expressions
//
//      Bool - true or false
//      in c, every nonzero value is equivalent to true, and zero is false.
//
//  Logical operators
//      AND (&&) - x && Y = true; all else false
//
//      OR (||) - at least one operand true.
//        X     Y       (x || y)
//        true  true    true
//        true  false   true
//        false true    true
//        false false   fales
//
//      NOT (!) inverts value of its operand
//      X       !x
//      true    false
//      false   true
//
// Relational operators
//
//  less than (x < y)
//  less than than or equal to (x <= y)
//  greater than (x > y)
//  greater than than or equal to(x >= y)
//  Equality (x == y)
//  Inequality (x != y)
//
//

//
#include <stdio.h>
#include <cs50.h>



int main(void)
{
    printf("hello world!\n");

    // conditionals (branches)
    // if
    bool b1 = true;

    if (b1 == true)
    {
        printf("b1 is true\n");
    }

     // if else
    bool b2 = false;

    if (b2 == true)
    {
        printf("b2 is true\n");
    }
    else
    {
        printf("b2 is false\n");
    }

       // if else if
    int number = 7;

    if ( number == 1)
    {
        printf("number is 1\n");
    }
    else if ( number == 2)
    {
        printf("number is 2\n");
    }
    else if ( number == 3)
    {
        printf("number is 3\n");
    }
    else
    {
        printf("number is NOT 1, 2 or 3\n");
    }

    //switch statement
    int x = get_int("input number:\n");
    switch(x)
    {
        case 1:
            printf("One!\n");
            break;
        case 2:
            printf("Two!\n");
            break;
        case 3:
            printf("Three!\n");
            break;
        default:
            printf("Not 1, 2 or 3!\n");
    }

    // ternary operator (?:)
    // very simple if else
    int y = 1;
    int z = (x > y) ? 5 : 6;

    printf("z is %i\n", z); // must use place holders
    //printf placeholders
    // %c - char
    // %f - float,double
    // %i - int
    // %li - long
    // %s - string




}