/* Practical 6: Ex 4 */

/* Take in both positive and negative numbers from the keyboard. */
/* The porgram should count and sum all positive numbers entered */
/* Negative numbers should be ignored */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{	
	// initialise variables
	int i,num,total=0;
	
	for(i=0;i<5;++i)
	{
    
	printf("Please Enter Number %d To Be Added: ", i+1);
	scanf("%d",&num);
	
	// add number to total
	if (num>0)
    {
	total+=num;
    }
    
	} // end of for loop
	
	printf("The Total Of The %d Postive Values Entered Is %d",i,total);
	
	getch();
	return(0);
	
} // end of main
