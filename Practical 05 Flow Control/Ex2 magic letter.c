/* Exercise 2: Program to guess magic letter from A to D */

/* Joe O'Regan */
/* 30-09-2015 */

#include<stdio.h>
int main()
{
    //single quotes for a character
    char magicLetter = 'A';
    char userLetter;
      
    printf("Try and Guess the Magic Letter between A and D\n");
    scanf("%c",&userLetter);
      
    if (userLetter==magicLetter)
	{
      	printf("You are a winner");
  	}
  		else
	{
		printf("Hard Luck");
	}
		
	      
             
    getch();
    return(0);
    }
      
