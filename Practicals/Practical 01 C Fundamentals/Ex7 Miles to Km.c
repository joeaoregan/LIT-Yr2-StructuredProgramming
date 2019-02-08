/*A Simple Program to convert distance in miles to kilometers*/

/*Joe O'Regan*/
/*Created on 24/09/2015*/

#include <stdio.h>

main()

{
      float miles,kilometers,rate;
      
      /*1 mile is 1.60924 kilometers*/
	  rate=1.60924;
	  
	  /*Enter number of miles to be converted - miles*/ 
      printf("Please Enter Number Of Miles: ");
      scanf("%f", &miles); 
      
	  /*Calculate the number of kilometers - kilometers*/      
      kilometers=miles*rate;
      
      /*Output the distance in kilometers*/
      printf("Distance In Kilometers Is: %.2f", kilometers);
      printf("km\n");
      
      /*Output the rate of miles to kilometers*/
      printf("At A Rate Of 1 Mile = %.5f", rate);
      printf("km\n");
            
      getch();
      return(0);
}
