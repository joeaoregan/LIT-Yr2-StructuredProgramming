/*A Program to calculate the net pay for a given employee */

/*Joe O'Regan*/
/*Created on 26/10/2015*/

#include <stdio.h>

main()
{
	/*Declare all Variables Required*/
      float Gross_Wages=45000;
      float Net_Wages;
      float Tax_rate=20;
      float Tax_Free_Allowance=400;
      float Taxable_Income;
      float Calculated_Tax;
      
	  /*Calculate that total amount of Taxable Income*/ 
      Taxable_Income=Gross_Wages - Tax_Free_Allowance;
      
      /*Display the Total Calculated Tax.*/
      Calculated_Tax = Taxable_Income/100*Tax_rate;
      
      /*Display the Total Net Wages.*/
	  Net_Wages = Gross_Wages - Calculated_Tax;
	  
	  /*Display the Net Pay.*/
	  printf("The Total Gross Pay %2.f",Gross_Wages);
	  printf("\nThe Total Tax Free Allowance is %.2f",Tax_Free_Allowance);
	  printf("\nThe Total Tax Due %.2f",Calculated_Tax);
	  printf("\nThe Calculated Net Wages are %.2f",Net_Wages);
	  
      getch();
      return(0);
      }
