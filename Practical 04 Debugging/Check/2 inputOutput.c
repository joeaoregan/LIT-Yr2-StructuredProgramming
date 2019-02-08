/*Practical 4: C Fundamentals*/
/*Part 2*/

/*Joe O'Regan*/
/*Created on 24/09/2015*/


#include<stdio.h>
main()
{
    char letter;
      
    int num1,num2;
      
    //two strings of same length not working???
    char first[5],second[6];
    float stored;
    
	//enter a character 
    printf("Enter any one keyboard character: ");
    scanf("%c",&letter);
    
	// enter 2 integers  
    printf("Enter two integers seperated by a space: ");
    scanf("%d %d",&num1,&num2);
      
      //enter first name last name
      
      //problems with this
	printf("Enter your firstname and secondname from the keyboard: ");
    scanf("%s %s",&first,&second);
      
      //enter float value
    printf("Enter a value of 2.95: ");
    scanf("%f",&stored);
      
      //output variables
    printf("\nThe Letter input was: %c",letter);
    printf("\nThe Letter input is stored at %.2f ",stored);
    printf("\nThe Numbers input were: %d and %d", num1,num2);
	printf("\nThe Names input were: %s and %s", first,second);
      
            
    getch();
    return(0);
    }
