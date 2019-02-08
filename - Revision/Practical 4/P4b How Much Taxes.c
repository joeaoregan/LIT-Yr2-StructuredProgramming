/* Practical 4: 1*/

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{
	
	float amount,tax;
	
	printf("How much?");
	scanf("%f",&amount);
	
	// calculate tax	
	tax=.33*amount;
	
	// output tax variable
	printf("You owe %.2f in taxes",tax);
	
	getch();
	return(0);
} // end of main
