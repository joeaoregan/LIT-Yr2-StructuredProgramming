/* Lecture 3 - Program to Demonstrate the Use of the Bitwise Operator*/

/* Joe O'Regan */
/* 10-10-2015 */


#include <stdio.h>
main()
{
 	int x=1;  
 	int y=2;  	
 	
 	
	printf("The & Operator for 1 and 2 is %d",x&y);
	printf("\nThe | Operator for 1 and 2 is %d",x|y);
	printf("\nThe ^ Operator for 1 and 2 is %d",x^y);
	printf("\nThe << Operator for 1 is %d",x<<2);
	printf("\nThe << Operator for 1 is %d",x>>2);
	printf("\nThe ~ Operator for 1 %d",~x);
	
	getch(); 
	return(0);		
}	


