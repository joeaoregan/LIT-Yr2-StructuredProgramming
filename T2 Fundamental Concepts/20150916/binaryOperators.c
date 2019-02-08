/*A Simple Program to Demonstrate Binary Operators*/
/*Joe O'Regan*/
/*Created on 16/09/2015*/
#include <stdio.h>
main()
{
      float x,y,add,subtract,divide,multiply,modulus;
       
      printf("Enter value for X:");
      scanf("%f", &x);
      printf("Enter value for Y:");
      scanf("%f", &y);
      add=x+y;
      printf("X + Y = %.2f\n", add);
      subtract=x-y;
      printf("X - Y = %.2f\n", subtract);
      divide=x/y;
      printf("X / Y = %.2f\n", divide);
      multiply=x*y;
      printf("X * Y = %.2f\n", multiply);
      modulus=x%y;
      printf("X % Y = %.2f\n", modulus);
      
            
      getch();
      return(0);
      }
