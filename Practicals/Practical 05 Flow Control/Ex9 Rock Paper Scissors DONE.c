/* Exercise 9: Rock Papers Scissors Game*/

#include<stdio.h>
int main()
{
	int R=1,P=2,S=3,playerChoice;
	int i=1,computer=3; // computer set to scissors
	int playerScore=0,computerScore=0;
	
	
	printf("Rock=1, Paper=2, Scissors=3\n");
	
	do
	{
	printf("Round %d Please Enter Selection\n",i);
	scanf("%d",&playerChoice);
   	
	if (playerChoice==computer)
	{
	printf("It's A Draw\n"); 
	}
	
	else if (playerChoice==2)
	{
	printf("Computer Wins\n");
	computerScore++;
	}
	
	else 
	{
	printf("Player wins\n");
	playerScore++;
	}
	
	i++; //increment counter
	}
	while(i<6);
	
	printf("Player Score: %d Computer Score: %d\n",playerScore,computerScore);
	
	if (computerScore>playerScore)
	{printf("Computer wins %d to %d", computerScore,playerScore);
	}
	else if (computerScore<playerScore)
	{
	printf("Player wins %d to %d", playerScore,computerScore);
	}
	else printf("It's a draw!!!");
	
    getch();
    return(0);
}
