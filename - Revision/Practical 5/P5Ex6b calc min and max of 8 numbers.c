/* Practical 5: Ex 6b */
/* Using For Loop - Enter in 8 numbers from the keyboard, calculate the min & max */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{
	int i,j=1,min,num,max;
	
		printf("Please Enter 8 Numbers\n");
		
		// set initial value for min number
		printf("Please Enter Number %d: ",j);
		scanf("%d",&min);
		
		// set initial value for max number
		max=min;
		
	for (i=j;i<8;++i)
	{
		printf("Please Enter Number %d: ",i + 1);
		scanf("%d",&num);
		
		// compare number entered to min, and set new value if less
		if (num<min) min=num;
		
		// compare number entered to max, and set new value if more
		if (num>max) max=num;
		
				
	} // end of for loop
		
	printf("\nThe Min Of All Numbers Entered is: %d",min);	
	printf("\nThe Max Of All Numbers Entered is: %d",max);
	
	getch();
	return(0);
} // end of main
