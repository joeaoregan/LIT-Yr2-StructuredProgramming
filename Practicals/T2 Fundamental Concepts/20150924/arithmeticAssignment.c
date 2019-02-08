/* Practical arithmetic and assignment*/

/* Joe O'Regan */
/* 24-09-2015*/

#include<stdio.h>
main()
{
      int x=10;
      int y=20;          
      
      //add      
      printf("If x is %d and y is %d\n", x,y);
      
      x+=y;
      printf("x+=y is %d \nor \nx + y is %d", x,x);
      
      
      //subtract
      printf("\n\nIf x is %d and y is %d\n", x,y);
      
      x-=y;
      printf("x-=y is %d \nor \nx - y is %d", x,x);
            
      getch();
      return(0);
      }
      
