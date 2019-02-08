/* Practical 1: Exercise 8 */
/* Program to calculate the sum of all digits when given a six digit number such as 346572 */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>

main()
{
	int num1=346572,remainder=0,sum=0,i;
	
	for(i=0;i<6;++i)
	{
		remainder=num1%10;
		sum += remainder;
		
		num1 = num1/10;
		printf("%d ",remainder);
	}
	
	printf("added is %d", sum);
	
} // end of main

