/*Practical 4: C Fundamentals*/
/*Part 2*/

/*Joe O'Regan*/
/*Created on 23/09/2015*/


#include<stdio.h>
main()
{
      char letter;
      
      int num1,num2;
      
      char firstname[5];
      char secondname[5];
      float m;
     
      printf("Enter any one keyboard character: ");
      scanf("%c",&letter);
      
      printf("Enter two integers seperated by a space: ");
      scanf("%d %d",&num1,&num2);
      
      printf("Enter your firstname and secondname from the keyboard: ");
      scanf("%s %s",&firstname,&secondname);
      
      printf("Enter a value of 2.95: ");
      scanf("%f",&m);
      
      printf("\nThe Letter input was: %c",letter);
      printf("\nThe Letter input is stored at %c ",letter);
      printf("\nThe Numbers input were: %d and %d", num1,num2);
      printf("\nThe Names input were: %s and %s", firstname,secondname);
      
      
            
      getch();
      return(0);
      }
