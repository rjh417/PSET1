/**
*  mario.c
*
*  Robert Hill
*  rjh417@gmail.com
*
*  Calculates a number of coins in change to return to a customer. 
*  Program takes a float input and prints the number of coins to return based only on quarters, dimes, nickels and pennies.
*
*/

#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    float input;
    int total;
    int count = 0;
    
    // get user input, validate input, convert dollars to cents
    do 
    {
        printf("How much change is owed: ");
        input = GetFloat();
        total = round(input * 100);
    }
    while (input <= 0);
    
    // test for quarters, subtract from total and increment count 
    while (total >= 25)
    {
        total = total - 25;
        count++;        
    }
    
    // test for dimes, subtract from total and increment count
    while (total >= 10)
    {
        total = total - 10;
        count++;
    }
    
    // test for nickels, subtract from total and increment count
    while (total >= 5)
    {
        total = total - 5;
        count++;
    }
    
    // test for pennies, subtract from total and increment count
    while (total >= 1)
    {
        total = total - 1;
        count++;
    }
    
    // print number of coins used to make change
    printf("%i\n", count);
}
