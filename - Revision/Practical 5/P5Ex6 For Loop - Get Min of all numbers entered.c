/* Practical 5: Ex 6 */
/* Using For Loop - Enter in 8 numbers from the keyboard, calculate the min of all numbers */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{
	int i,j=1,min,num;
	
		printf("Please Enter 8 Numbers\n");
		
		// set initial value for minimum number
		printf("Please Enter Number %d: ",j);
		scanf("%d",&min);
	
	for (i=j;i<8;++i)
	{
		printf("Please Enter Number %d: ",i + 1);
		scanf("%d",&num);
		
		// compare number entered to min, and set new value if less
		if (num<min)
		{
		 min=num;
		}
		
				
	} // end of for loop
		
	printf("\nThe Min of all numbers entered is: %d",min);
	
	getch();
	return(0);
} // end of main
