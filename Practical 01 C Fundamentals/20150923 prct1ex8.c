/* Practical 1, Exercise 8*/

/* Joe O'Regan */
/* 23-09-2015*/

#include<stdio.h>
main()
{
      int number,mod,sum;
            
      
            
      printf("Enter A Six Digit Number: \n");
      scanf("%d", &number);
      
      mod = number % 10;
      //number = number / 10;
      
      sum = sum+mod;
      number = number / 10;
      //printf("sum: %d", sum);
      
      mod = number % 10;
      sum = sum + mod;
      
      number = number / 10;
      
      //sum = sum+mod;
     
      printf("sum: %d", sum);
      
       
      
      getch();
      return(0);
      }
      
