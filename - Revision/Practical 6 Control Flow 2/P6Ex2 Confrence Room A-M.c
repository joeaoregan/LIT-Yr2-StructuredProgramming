/* Practical 6: Ex 2 */
/* determine which conferernce room in a hotel attendee's should attend */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{	

	char initial;
	
	printf("Please Enter First Letter Of Surname: ");
	scanf(" %c",&initial);
	
	if(initial < 'N')
	{
		printf("Please Attend Room 1564");
	}
	else
	{
		printf("Please Attend Room 2415");
	}
	
	getch();
	return(0);
	
} // end of main
