/* Practical 5: Ex 3 */
/* Print Numbers From 1 to 10 While, Do While, For Loops */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{
	int i=0,j=0,k;
	
	printf("Numbers From 1 To 10 Using While Loop\n");
	
	while (i<10)
	{
		printf("%d ",++i);
	} // end of while loop
	
	printf("\n\nNumbers From 1 To 10 Using Do While Loop\n");
	
	do
	{
		printf("%d ",++j);
		
	}
	while(j<10); // end of do while loop
	
	printf("\n\nNumbers From 1 To 10 Using For Loop\n");
	
	for(k=1;k<=10;++k)
	{
		printf("%d ",k);
	} // end of for loop
	
	getch();
	return(0);
} // end of main
