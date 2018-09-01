/* Program to Demonstrate Arithmetic*/

/* Joe O'Regan */
/* 08-10-2015 */

#include <stdio.h>

main()
{
 	int a=4, b=8, c=1, d=1;
 	
 	printf("Addition: %d \n",a+b);
 	printf("Subtraction: %d \n",b-a);
 	printf("Multiplication: %d \n",a*b);
 	printf("Division: %d \n",b/a);
 	printf("Modulus: %d \n",b%a);
 	
 	printf("Postfix Increment: %d \n",c++);
 	printf("Postfix now: %d \n",c);
 	printf("Prefix Increment: %d \n",++d);
 	printf("Prefix now: %d \n",d);

 	getch();
 	return(0);
 }	

