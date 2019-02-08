/*A Simple Program to Demonstrate Binary Operators*/
/*Joe O'Regan*/
/*Created on 16/09/2015*/
#include <stdio.h>
main()
{
      float a,b,div;
             
      printf("Enter value for X:");
      scanf("%f", &a);
      printf("Enter value for Y:");
      scanf("%f", &b);
      
	  printf("X + Y = %.f\n", a+b);
      	  
      printf("X - Y = %.f\n", a-b);
      
      printf("X / Y = %.2f\n", a / b);
     
      printf("X * Y = %.f\n", a * b);
      
      int x=a;
      int y=b;
      int modulus=x % y;
	  printf("X %% Y = %d\n", modulus);
      
            
      getch();
      return(0);
      }
