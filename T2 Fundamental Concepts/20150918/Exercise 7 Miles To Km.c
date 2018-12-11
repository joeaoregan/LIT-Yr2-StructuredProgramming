/*A Simple Program to convert distance in miles to kilometers*/

/*Joe O'Regan*/
/*Created on 16/09/2015*/
#include <stdio.h>
main()
{
      float miles,km,rate;
      
	  rate=1.60924;
	   
      printf("Please Enter Number Of Miles: ");
      scanf("%f", &miles); 
            
      km=miles*rate;
      
      printf("Distance In Kilometers Is: %.2f\n", km);
      printf("At A Rate Of 1 Mile = %.5f", rate);
      printf("km\n");
            
      getch();
      return(0);
      }
