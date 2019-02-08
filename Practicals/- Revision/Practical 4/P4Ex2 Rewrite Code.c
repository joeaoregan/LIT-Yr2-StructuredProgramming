/* Practical 4: 2*/

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{
	
	char letter;
	int num1,num2;
	char x[5];
	char y[5];
	float m;
	
	printf("Enter any one keyboard character");
	scanf("%c",&letter);
	
	printf("Enter two integers seperated by a space:");
	scanf("%d %d",&num1,&num2);
	
	printf("Enter your firstname and secondname from the keyboard: ");
	scanf("%s %s",&x,&y);
	
	printf("Enter a value of 2.95");
	scanf("%f",&m);
	
	printf("\nThe Letter input was: %c", letter);
	printf("\nThe Letter input is stored at %f\n", m);
	printf("\nThe Numbers input were: %d and %d\n",num1,num2);
	printf("\nThe Names input were: %s and %s\n",x,y);
	
	getch();
	return(0);
} // end of main
