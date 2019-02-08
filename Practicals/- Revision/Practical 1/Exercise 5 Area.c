/* Practical 1: Exercise 5 */
/* Program to calculate area */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>

main()
{
	float base, height, area;
	
	printf("Base: ");
	scanf("%f",&base);
	
	printf("Height: ");
	scanf("%f",&height);
	
	area = base * height;
	
	printf("Area: %.2f",area);
	
	getch();
	return(0);

} // end of main

