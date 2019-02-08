/* Practical 1: Exercise 3 */
/* Program to calculate the simple interest for a given sum of money deposited over a number of years at a particular interest rate */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>

main()
{
	// initialise variables
	int sum=1000, numberOfYears=5, interestRate=5,interest;
	
	// Calculate Simple Interest
	
	interest = ((sum * interestRate) / 100) * numberOfYears; 
	
	// Output 
	printf("Interest on %d with simple interest Rate of %d percent For %d Years is %d", sum,interestRate,numberOfYears,interest);
	
	getch();
	return(0);

} // end of main

