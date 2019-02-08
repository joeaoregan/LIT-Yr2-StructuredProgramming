/* Practical 5: Ex 8 */
/* Using For Loop - calculate the compound interest on €50,000 over 4 years at a rate of 2.5%*/

/* Joe O'Regan */
/* 20-10-2015 */

#include <stdio.h>
main()
{	int i;
	float sum=50000;
	float rate=2.5;
	float years=4;
	float totalInterest,interest;

	printf("Given A Sum Of %.2f, And Interest Rate Of %.1f percent\n",sum,rate);
	
	for (i=1;i<=years;++i)
	{
		interest=sum*(rate/100);
		printf("Compound Interest Year %d is %.2f: \n",i,interest);
		
		// add the interested earned to sum
		sum+=interest;
		
		// add the interest for year to total interest
		totalInterest+=interest;
				
	} // end of items for loop
	
	// output average
	printf("The Total Interest Earned Over %.0f Years At %.1f percent is: %.2f\n",years,rate,totalInterest);	
	
	getch();
	return(0);
	
} // end of main
