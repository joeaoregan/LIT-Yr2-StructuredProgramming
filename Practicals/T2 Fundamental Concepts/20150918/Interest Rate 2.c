/*A Simple Program to calculate simple interest over a number of years*/
/*Joe O'Regan*/
/*Created on 18/09/2015*/
#include <stdio.h>
main()
{
      float balance,interestRate,interestOne,interestTwo;
       
      printf("Please Enter Balance: ");
      scanf("%f", &balance);
      printf("Please Enter Interest Rate: ");
      scanf("%f", &interestRate);
      
      interestOne=balance*(interestRate/100);
      balance=balance+interestOne;
      printf("Simple Interest For One Year Is: %.2f\n", interestOne);
      interestTwo=(balance + interestOne)*(interestRate/100);
      printf("Simple Interest For Two Years Is: %.2f\n", interestTwo);
      
	        
      getch();
      return(0);
      }
