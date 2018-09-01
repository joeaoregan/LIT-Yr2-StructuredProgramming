/* Practical 1: Exercise 7 */
/* Program to convert miles to kilometers */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>

main()
{
	float mile, distance;
	
	printf("Input Distance In Miles: ");
	scanf("%f",&mile);
	
	distance=mile*1.60934;
	
	printf("Distance In km: %f\n", distance);
	
	getch();
	return(0);

} // end of main

