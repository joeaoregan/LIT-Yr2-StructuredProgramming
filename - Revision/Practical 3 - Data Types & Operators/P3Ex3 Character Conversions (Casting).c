/* Practical 3 Ex3 - Character Casting */

/* Joe O'Regan */
/* 10-10-2015 */

#include <stdio.h>

int main()
{
 	char letter='A';
	float num=0;
 	int zee = 90;
 	int x=5,y=7;
 	double decimal=0.123459323;
 	
 	printf("Character Conversion using the C Programming Language:\n");
 	printf("letter=A number=90\n\n");
 	
 	printf("Char cast to an int: %d \n",(int)letter);
 	printf("int cast to an char: %c \n",(char)zee);
 	printf("Char cast to a float: %f \n", (float)letter);
 	printf("Char A multiplied by 2 = %d \n",letter*2);
	
	getch(); 
	return(0);		
}	


