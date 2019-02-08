/*A Simple Program to calculate Net Pay of a Worker,*/
/*given a particular tax rate and tax free allowance*/

/*Joe O'Regan*/
/*Created on 16/09/2015*/
#include <stdio.h>
main()
{
      float grossPay,netPay,tfa,taxable,taxRate;
       
      printf("Please Enter Gross Pay: ");
      scanf("%f", &grossPay); 
      
      printf("Please Enter Tax Rate: ");
      scanf("%f", &taxRate);
      
      printf("Please Enter Tax Free Allowance: ");
      scanf("%f", &tfa);
      
      taxable=grossPay-tfa;
      netPay=grossPay-(taxable*(taxRate/100));
      
      printf("Net Pay Is: %.2f", netPay);
            
      getch();
      return(0);
      }
