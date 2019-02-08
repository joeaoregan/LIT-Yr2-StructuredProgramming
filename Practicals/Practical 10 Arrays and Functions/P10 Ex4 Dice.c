#include <stdio.h>
#include <math.h>
#include <time.h>

int score;

int main()
{
	score=0;
	
	int i,dice1,dice2;
	char player[]="Player";
	char enemy[]="Enemy";
	char exit;
 	int playerX=0,enemyY=0;
 	
	srand(time(NULL)); //new
  	
	printf("Start Game\n");
	do
	{
	 printf("Player: ");
     rollDice();
    
     
	 printf("Roll Again? (Enter 'x' to Exit!)");
	 scanf(" %c",&exit);
	}
	while(exit!='x');

 
  return 0;
}
rollDice()
{
	int dice1 = rand() % 6 + 1;
    int dice2 = rand() % 6 + 1;
    int position = dice1+dice2;
    
	if ((dice1==1)&&(dice2==1))
	{
	printf("\nSnake Eyes!!\nPlayer -1\n");
	}
	if ((dice1+dice2)==7)
	{
	printf("\nLucky Number Seven!!\n");
	}
	 
    printf("Dice 1: %d Dice 2: %d\n", dice1,dice2);
}
