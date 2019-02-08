/* Practical 5: Ex 1 */
/* Guess The Magic Number */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{
	
	int magicNum=7,userNum;
	
	printf("Try And Guess The Magic Number\n");
	printf("Enter A Number Between 1 and 10: ");
	scanf("%d",&userNum);
	
	if (userNum==magicNum)
	{
		printf("You guessed it!\n");
	}
	else
	{
		printf("Wrong Answer, The Number Was %d",magicNum);
	}
	
	
	getch();
	return(0);
} // end of main
