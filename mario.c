/**
*  mario.c
*
*  Robert J. Hill
*  rjh417@gmail.com
*
*  Program asks user for integer input between 0 and 23 and checks that the input is valid.
*  Constructs a half pyramid to the height input by the user.
*   
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get input from user and test validity
    int height;
    do
    {   
        printf("Height: ");
        height = GetInt();        
    }
    while((height < 0) || (height > 23));
    
    // print rows 
    for (int rows = 0; rows < height; rows++)
    {
        // print spaces on each row
        int spaces;
        for (spaces = 0; spaces < (height - rows - 1); spaces++) 
        {
            printf(" ");
        }
        // print  #'s on each row
        for (int hashes = 0; hashes < (height - spaces + 1); hashes++)
        {
            printf("#");
        }
       
        printf("\n");
    }  
}
    
