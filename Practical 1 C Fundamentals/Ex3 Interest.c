/*A Simple Program to calculate simple interest over a number of years*/

/*Joe O'Regan*/
/*Created on 24/09/2015*/

#include <stdio.h>

main()

{
	
      float balance,interestRate,interestOne,interestTwo,totalInterest;
      
      /*Enter the Balance the interest is to be derived from, stored in variable balance*/
      printf("Please Enter Balance: ");
      scanf("%f", &balance);
      
      /*Enter the interest rate percentage, stored in variable interestRate*/
      printf("Please Enter Interest Rate Percentage: ");
      scanf("%f", &interestRate);
      
      /*Calculate interest for year one*/      
      interestOne=balance*(interestRate/100);
      
      /*Output the interest for Year One*/
      printf("Simple Interest For Year One On %.2f Is: %.2f\n", balance, interestOne);
      
      /*Add interest to balance, for a new balance total*/      
      balance=balance+interestOne;
      
      /*Calculate interest for year two*/   
	  /*interestTwo=(balance + interestOne)*(interestRate/100)) --- Removed balanced was interest was being added twice*/
      interestTwo=balance *(interestRate/100);
      
      /*Output the interest for year two*/
      printf("Simple Interest For Year Two On %.2f Is: %.2f\n", balance,interestTwo);
      
      /*Calculate total interest for 2 years*/
      totalInterest = interestOne + interestTwo;
      
      /*Output total interest over 2 years*/
      printf("Total Interest Earned For Two Years Is: %.2f\n", totalInterest);
      
      getch();
      
      return(0);
      }
