/* Practical 6: Ex 3 */
/* program to sum 20 values entered from the keyboard - exiting if zero entered */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{	
	// initialise variables
	int i,inputNumber,total=0;
	
	for(i=0;i<3;++i)
	{
		printf("Please Enter Number %d: ",i+1);
		scanf("%d",&inputNumber);
		
		total+=inputNumber;
	}
	
	printf("The Total Of The %d Values Entered Is %d",i,total);
	
	getch();
	return(0);
	
} // end of main
