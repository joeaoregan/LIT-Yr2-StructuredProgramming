/*A Program to convert distance in miles to kilometers*/

/*Joe O'Regan*/
/*Created on 26/10/2015*/

#include <stdio.h>

main()

{
      float mil,kilo;
	
      printf("Please enter miles: ");
      scanf("%f", &mil); 
      
      kilo=mil * 1.60934;
      printf("\n%f Miles = \t%f Kilometers\n",mil, kilo);
                  
      getch();
      return(0);
}
