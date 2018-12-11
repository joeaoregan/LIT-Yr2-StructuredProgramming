/*A Simple Program to Demonstrate Binary Operators*/
/*Joe O'Regan*/
/*Created on 16/09/2015*/
#include <stdio.h>
main()
{
      float x,y,add,subtract,divide,multiply;
	  int a,b,modulus;
       
      printf("Enter value for X:");
      scanf("%f", &x);
      printf("Enter value for Y:");
      scanf("%f", &y);
      
	  add=x+y;
      printf("X + Y = %.f\n", add);
      subtract=x-y;
      printf("X - Y = %.f\n", subtract);
      divide=x/y;
      printf("X / Y = %.2f\n", divide);
      multiply=x*y;
      printf("X * Y = %.f\n", multiply);
      
	  a=x;
      b=y;
	  modulus=a % b;
      printf("X %% Y = %d\n", modulus);
      
            
      getch();
      return(0);
      }
