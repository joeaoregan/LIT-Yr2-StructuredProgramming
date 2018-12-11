/*Practical 2: C Fundamentals 2*/
/*2b. Sam - exressions stored in variables*/

/*Joe O'Regan*/
/*Created on 24/09/2015*/


#include<stdio.h>
/*put in 'int main'*/
int main()
{
	char group;
	int age,ageLevel;
	
	/*initialise variables*/
	char name[]="Sam";
	age=24;
	ageLevel=14;
	group='A';
	
      /*Output variables*/
      printf("%s %d is eligible to play under %d Group %c rugby.", name,age,ageLevel,group);
            
      getch();
      return(0);
      }
