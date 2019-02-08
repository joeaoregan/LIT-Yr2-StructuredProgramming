/* Exercise 1: Tax on salary */

/* Joe O'Regan */
/* 10-10-2015 */

#include<stdio.h>
int main()
{
    float salary;
    
    printf("Enter Salary: ");
    scanf("%f", &salary);
    
    if(salary>100000)
    {
    	printf("The Tax Rate Is 42%%\n");
	}
	
	else if (salary<20000)
	{
		printf("No Tax is due\n");
	}	
    else
    {
    	printf("The Tax Rate Is 20%%\n");
	}
             
    getch();
    return(0);
 } // end of main
      
