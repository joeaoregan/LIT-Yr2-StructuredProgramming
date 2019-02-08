/*A Simple Program to calculate simple interest over a number of years*/
/*Joe O'Regan*/
/*Created on 18/09/2015*/
#include <stdio.h>
main()
{
      float balance,interestRate,interestOne,interestTwo;
       
      printf("Please Enter Balance: ");
      scanf("%f", &balance);
      printf("Please Enter Interest Rate Percentage: ");
      scanf("%f", &interestRate);
      
      /*Calculate interest for year one*/
      
      interestOne=balance*(interestRate/100);
      
      printf("Simple Interest For One Year on %.2f Is: %.2f\n", balance, interestOne);
      
      /*Add interest to balance, for a new balance total*/
      
      balance=balance+interestOne;
      
      /*Calculate interest for year two*/
      
      interestTwo=(balance /*+ interestOne*/)*(interestRate/100);
      
      printf("Simple Interest For Two Years Is: %.2f\n", interestTwo);
      
	        
      getch();
      return(0);
      }
