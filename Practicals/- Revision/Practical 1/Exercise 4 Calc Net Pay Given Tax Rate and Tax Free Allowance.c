/* Practical 1: Exercise 4 */
/* Program to calculate the net pay of a worker given a particular tax rate and tax free allowance */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>

main()
{
	// initialise variables
	int grossPay=500, taxRate=40, taxFreeAllowance=200,taxablePay,netPay; 
	
	// Calculations
	taxablePay = grossPay - taxFreeAllowance;
	netPay=grossPay - ((taxablePay * 40) / 100);
	
	// Output 
	printf("If Gross Pay Is: %d\n",grossPay);
	printf("Tax Rate Is: %d percent\n",taxRate);
	printf("Tax Free Allowance Is: %d\n",taxFreeAllowance);
	printf("Then Net Pay Is: %d", netPay);
	
	getch();
	return(0);

} // end of main

