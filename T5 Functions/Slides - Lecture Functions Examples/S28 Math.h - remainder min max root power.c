/* Slide 28: Math.h Example */

/* Joe O'Regan */
/* 23-10-2015 */

#include <stdio.h>
#include <math.h>

/*Program to demonstrate some mathematical functions*/

main()
{
   	printf("\n\n%f Returns the remainder of a/b", fmod(10.0,3.0));
 	
    printf("\n\n%f Returns the lesser of a and b",fmin(10,20));
	printf("\n\n%f Returns the max of a and b",fmax(10.0,20.0));
		
	printf("\n\n%f Returns the square", sqrt(49.0));
	
    printf("\n\n%f Returns the base raised to a power", pow(2.0,2.0));
	
    getch();
    return(0);}

