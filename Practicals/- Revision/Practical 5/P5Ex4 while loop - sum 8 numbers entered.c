/* Practical 5: Ex 4 */
/* Using While Loope - Enter in 8 numbers from the keyboard, calculate the sum */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{
	int i=1,enteredNum,sum=0;
	
		printf("Please Enter 8 Numbers\n");
	
	while (i<=8)
	{
		printf("Please Enter Number %d: ",i++);
		scanf("%d",&enteredNum);
		
		// add entered num to running total (sum)
		sum+=enteredNum;
		
	} // end of while loop
	
	printf("\nThe Sum Of The Numbers Entered Is: %d",sum);
	
	getch();
	return(0);
} // end of main
