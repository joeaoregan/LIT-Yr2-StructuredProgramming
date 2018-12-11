/*A Simple Program to calculate Net Pay of a Worker,*/
/*given a particular tax rate and tax free allowance*/

/*Joe O'Regan*/
/*Created on 16/09/2015*/

#include <stdio.h>

main()
{
      float grossPay,netPay,tfa,taxable,taxRate;
      
	  /*input the gross pay to perform calculation on - grossPay*/ 
      printf("Please Enter Gross Pay: ");
      scanf("%f", &grossPay); 
      
      /*Input the tax rate - taxRate*/
      printf("Please Enter Tax Rate: ");
      scanf("%f", &taxRate);
      
      /*Enter the tax free allowance - tfa*/
      printf("Please Enter Tax Free Allowance: ");
      scanf("%f", &tfa);
      
      /*taxable pay (taxable) is the gross pay minus the tax free allowance*/
      taxable=grossPay-tfa;
      
      /*Net pay is the gross pay - (taxable pay x tax rate percentage)*/
      netPay=grossPay-(taxable*(taxRate/100));
      
      /*Output the net pay - netPay*/
      printf("Net Pay Is: %.2f", netPay);
            
      getch();
      return(0);
      }
