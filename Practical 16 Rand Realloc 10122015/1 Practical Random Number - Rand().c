/* The rand() function returns an integer value between 0 and RAND_MAX
RAND_MAX is a constant whose default value may vary between implementations but ofen is at least
32767 srand(unsigned int seed) this function seeds the random number */

/* Joe O'Regan */
/* 10-12-2015*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i,n;
	time_t t;
	
	n=5;
	
	/* initialise random number generator */
	srand((unsigned) time(&t));
	
	/* Print 5 random numbers from 0 to 49 */
	for(i=0;i<n;i++)
	{
	 printf("%d\n",rand() %50);
	}
	
	getch();
    return(0);
}
      
