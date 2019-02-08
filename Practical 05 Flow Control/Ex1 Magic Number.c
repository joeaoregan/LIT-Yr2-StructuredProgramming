/* Exercise1: Program to guess magic number */

/* Joe O'Regan */
/* 30-09-2015 */

#include<stdio.h>
main()
{
      int magicNumber=7;
      int userNumber;
      
      printf("Try and guess the magic number between 1 and 10\n");
      scanf("%d",&userNumber);
      
      // no mechanism in an if statement for false
      if (userNumber==magicNumber)
      {
      printf("You guessed the magic number\n");
      }
                 
             
      getch();
      return(0);
      }
      
