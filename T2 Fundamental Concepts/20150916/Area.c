/*A Simple Program to calculate Area*/
/*Joe O'Regan*/
/*Created on 16/09/2015*/
#include <stdio.h>
main()
{
      float base,height,area;
       
      printf("Base:");
      scanf("%f", &base);
      printf("Height:");
      scanf("%f", &height);
      area=(base*height);
      printf("Area:%.2f", area);
            
      getch();
      return(0);
      }
