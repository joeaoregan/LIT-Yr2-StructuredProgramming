/* Practical 4: 1*/

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{
	float s,t;
	
	printf("How much?");
	scanf("%f",&s);
	
	t=.33*s;
	
	printf("You owe %.2f in taxes",t);
	
	getch();
	return(0);
}
