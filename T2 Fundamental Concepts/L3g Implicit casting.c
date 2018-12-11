/* Lecture 3 - Implicit Casting Example */

/* Joe O'Regan */
/* 10-10-2015 */


#include <stdio.h>
main()
{
 	int intNum=3;
	float floatNum=10.0;

	int intAns =floatNum/intNum;
	float floatAns = floatNum/intNum;

	printf("float div int, stored in an int %d\n", intAns);

	printf("float div float, stored in a float %f\n", floatAns);
		
	
	getch(); 
	return(0);		
}	


