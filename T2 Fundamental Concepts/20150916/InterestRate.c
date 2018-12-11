/*A Simple Program to calculate Area*/
/*Joe O'Regan*/
/*Created on 16/09/2015*/
#include <stdio.h>
main()
{
      float balance,interestRate;
       
      printf("Balance:");
      scanf("%f", &balance);
      printf("interestRate:");
      scanf("%f", &interestRate);
      balance=balance*(interestRate/100);
      printf("Balance:%.2f", balance);
            
      getch();
      return(0);
      }
