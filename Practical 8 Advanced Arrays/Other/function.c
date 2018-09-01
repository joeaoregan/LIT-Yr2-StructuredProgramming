/* function example */

/* Joe O'Regan */
/* 14-10-2015 */

#include<stdio.h>

int main()
{
    funct(); // goes to funct() below, then returns to the following printf statement 
    printf("This is the main function");
    
        
    getch();
    return(0);
 } // end of main
      
// void fuct() // dependent on the compiler      
funct()
     {
     printf("This is a function");
     }
