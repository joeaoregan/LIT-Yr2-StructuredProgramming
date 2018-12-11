/* Practical 1, Exercise 8*/

/* Joe O'Regan */
/* 23-09-2015*/

#include<stdio.h>
main()
{
      int number,mod1,mod2,mod3,mod4,mod5,mod6,sum;          
      
	  /*Input the 6 digit number*/            
      printf("Enter A Six Digit Number: \n");
      scanf("%d", &number);
      
      /*Separate digits using modulus operator*/
	  /*get first remainder - mod1*/
      mod1 = number % 10;
      
      /*output variables to find and track error in code*/
      //printf("mod: %d \n", mod);
      
      /*add 1st remainder to total (sum)*/
      sum = mod1;
      
	  /*output variables to find error in code*/
      //printf("sum: %d \n", sum);
      
      /*divide the number by 10, and then repeat process to find next remainder*/
      number = number / 10;
      
	  /*output variables to track progress of code*/
	  //printf("sum: %d", sum);
      //printf("number: %d \n", number);
      
      /*get 2nd remainder, add remainder to total, divide number by 10 etc*/
      mod2 = number % 10;
      sum = sum + mod2;
      number = number / 10;
      
      /*3rd remainder*/
      mod3 = number % 10;
      sum = sum + mod3;
      number = number / 10;
      
      /*4th remainder*/
      mod4 = number % 10;
      sum = sum + mod4;
      number = number / 10;
      
      /*5th remainder*/
      mod5 = number % 10;
      sum = sum + mod5;
      number = number / 10;
      
      /*6th remainder*/
      mod6 = number % 10;
      sum = sum + mod6;
      number = number / 10;
      
      /*old calculations*/
      //sum = sum+mod;
	  //printf("mod: %d \n", mod);
      printf("sum of %d + %d + %d + %d + %d + %d = %d", mod6,mod5,mod4,mod3,mod2,mod1,sum);
            
      getch();
      return(0);
      }
      
