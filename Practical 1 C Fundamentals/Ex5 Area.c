/*A Simple Program to calculate Area*/

/*Joe O'Regan*/
/*Created on 24/09/2015*/

#include <stdio.h>

main()

{
      int base,height,area;
       
      printf("Base:");
      scanf("%d", &base);
      
      printf("Height:");
      scanf("%d", &height);
      
      area=(base*height);
      printf("Area:%d\n", area);
            
      getch();
      
      return(0);
      }
