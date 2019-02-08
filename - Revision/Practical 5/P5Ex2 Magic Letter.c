/* Practical 5: Ex 2 */
/* Guess The Magic Letter */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{
	
	char magicLetter='C',userLetter;
	
	printf("Try And Guess The Magic Letter\n");
	printf("Enter A Letter Between A and D: ");
	scanf("%c",&userLetter);
	
	if (userLetter==magicLetter)
	{
		printf("You are a winner\n");
	}
	else
	{
		printf("Hard Luck");
	}
	
	
	getch();
	return(0);
} // end of main
