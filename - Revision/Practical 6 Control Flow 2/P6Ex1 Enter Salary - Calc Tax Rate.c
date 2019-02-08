/* Practical 6: Ex 1 */
/* Enter Salary, Calculate tax rate */

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{	

	float salary;
	
	printf("Please Enter Salary Earned Last Year: ");
	scanf("%f",&salary);
	
	if (salary>100000)
	{
		printf("Tax Rate Is 42 Percent");
		
	}
	else if (salary<20000)
	{
		printf("No Tax Is To Be Paid");
		
	}
	else
	{
		printf("Tax Rate Is 20 Percent");
	}
	
	getch();
	return(0);
	
} // end of main
