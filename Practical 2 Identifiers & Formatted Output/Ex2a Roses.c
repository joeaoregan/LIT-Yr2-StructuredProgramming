/*Practical 2: C Fundamentals 2*/
/*2a. Roses - exressions stored in variables*/

/*Joe O'Regan*/
/*Created on 18/09/2015*/


#include<stdio.h>
/*put in 'int main'*/
int main()
{
	int roses1,roses2;
	float cost1,cost2;
	
	/*initialise variables*/
	roses1=24;
	roses2=12;
	cost1=20;
	cost2=10;
      
      /*Output variables*/
      printf("%d Roses will cost %.2f Euro as %d cost %.2f Euro.", roses1,cost1,roses2,cost2);
            
      getch();
      return(0);
      }
