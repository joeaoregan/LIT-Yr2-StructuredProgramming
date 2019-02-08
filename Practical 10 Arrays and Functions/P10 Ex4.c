#include <stdio.h>
#include <math.h>

main()
{
	int i=0;
	for(i=0;i<10;i++)
	{
  	  printf("\n%d: is the random number generated", rand(3));
	}

    getch();
    return(0);
}

