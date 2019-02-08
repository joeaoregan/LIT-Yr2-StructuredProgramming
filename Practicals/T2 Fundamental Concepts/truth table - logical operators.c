/* Logical Operators Truth Table*/

/* Joe O'Regan */
/* 27-10-2015*/

#include<stdio.h>
main()
{
	//Logical Operators
	printf("Logical Operators:\n");
	
	printf("Where x=1 and y=0\n\n");
	int x=1,y=0;
      
	printf("x && y = \t%d\n", x&&y);
	printf("x || y = \t%d\n", x||y);
	printf("!x = \t\t%d\n", !x);
	printf("!y = \t\t%d\n", !y);
      
	getch();
	return(0);
	}
      
