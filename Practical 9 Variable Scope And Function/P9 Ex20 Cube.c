/* Practical 9: Variable Scope and Functions
	program to take in a value and ouput the cube of that value
   Exercise 20 */

/* Joe O'Regan */
/* 26-10-2015 */

#include<stdio.h>

// Global Variables
int input,output;

main() // main is a function
{
    getValue();
    cube();
    
    getch();
    return(0);
 } // end of main

// Function: Get Value
getValue()
{
	printf("Please Enter Value to be cubed: ");
	scanf("%d",&input);
}

// Fuction: Cube 
cube()
{
    output=input*input*input;
    printf("The Cubed Value of %d is %d",input,output);
    //return(output);
}
