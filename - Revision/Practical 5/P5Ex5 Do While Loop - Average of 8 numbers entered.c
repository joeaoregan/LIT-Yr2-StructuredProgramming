/* Practical 5: Ex 4 */
/* Using While Loope - Enter in 8 numbers from the keyboard, calculate the average */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{
	int i=1;
	float enteredNum,sum=0,average;
	
		printf("Please Enter 8 Numbers\n");
	
	do
	{
		printf("Please Enter Number %d: ",i++);
		scanf("%f",&enteredNum);
		
		// add entered num to running total (sum)
		sum+=enteredNum;
		
	} // end of while loop
	while (i<=8);
	
	// calculate average
	average=sum/8;
	
	printf("\nThe Average Of The Numbers Entered Is: %.2f",average);
	
	getch();
	return(0);
} // end of main
