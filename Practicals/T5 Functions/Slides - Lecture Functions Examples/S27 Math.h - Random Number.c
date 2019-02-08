/* Slide 27: Math.h Example */

/* Joe O'Regan */
/* 23-10-2015 */

#include <stdio.h>
#include <math.h>

main()
{
	int i=0;
	for(i=0;i<10;i++)
	{
  	  printf("\n%d: is the random number generated", rand());
	}

    getch();
    return(0);
}

