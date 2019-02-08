/* Lecture 3 - Explicit Casting Example */

/* Joe O'Regan */
/* 10-10-2015 */

#include <stdio.h>

int main()
{
 	float num=5.75;
 	char letter='A';
 	int zee = 90;
 	int x=5,y=7;
 	double decimal=0.123459323;
 	
 	printf("Float cast to an int: %d \n",(int)num);
 	printf("Char cast to an int: %d \n",(int)letter);
 	printf("int cast to an char: %c \n",(char)zee);
 	printf("int cast to a float: %f \n",(float)x);
 	printf("float arithmetic: %f \n",(float)x/(float)y);
 	printf("Double value: %f \n",decimal);
 	printf("Double case to a float: %f \n",(float)decimal);
	
	getch(); 
	return(0);		
}	


