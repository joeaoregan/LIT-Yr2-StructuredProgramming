/* Practical 5: Ex 9 */
/* Rock, Paper, Scissors */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{	
	int i=0,playerTotal=0,computerTotal=0;
	char player;
	char computer='P';

	printf("Rock = R, Paper = P, Scissors = S\n");
	
	do
	{
	printf("Round %d of 5\n",++i);
	printf("Enter Your Choice: ");
	scanf(" %c",&player);
	
	if (player==computer)
	{
		printf("Draw\n");
	}
	else if (player=='R')
	{
		printf("Lose\n");
		++computerTotal; // increment computer win total
		
	}
	else if (player=='S')
	{
		printf("Win\n");
		++playerTotal; // increment player win total
	}
	else printf("Unexpected Input");
	}
	while(i<5);
	
	// output resulst of 5 rounds of play
	if(playerTotal>computerTotal)
	{
		printf("Player Wins %d-%d\n",playerTotal,computerTotal);
	}
	else if(playerTotal<computerTotal)
	{
		printf("Computer wins %d-%d\n",computerTotal,playerTotal);
	}
	else
	{
		printf("The Resulst Was A Draw %d-%d\n",computerTotal,playerTotal);
	}
	
	
	getch();
	return(0);
	
} // end of main
