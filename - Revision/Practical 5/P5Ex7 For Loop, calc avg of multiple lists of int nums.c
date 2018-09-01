/* Practical 5: Ex 7 */
/* Using For Loop - calculate the average of multiple lists of integer numbers*/

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{
	int i,num,total,average,items,j,lists;
	
	printf("Please Enter Number Of Lists: ");
	scanf("%d",&lists);
	
	for (j=0;j<lists;++j)
	{
	printf("Please Enter Number Of Items: ");
	scanf("%d",&items);
	
	// initialise variables
	total=0;
	num=0;
	average=0;
	
	// for loop - until number of items reached	
	for (i=1;i<=items;++i)
	{
		printf("Please enter number %d: ",i);
		scanf("%d",&num);
		
		total+=num;
				
	} // end of items for loop
	
	// calc average of total numbers divided by items
	average=total/items;
	
	// output average
	printf("The average of %d integer numbers is %d\n",items,average);	
	
	} // end of list for loop
	
	getch();
	return(0);
	
} // end of main
