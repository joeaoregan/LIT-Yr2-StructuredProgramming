/* Practical 7 Arrays Ex1 Part b */

/* Joe O'Regan */
/* 07-10-2015 */

#include<stdio.h>
main()
{
      int i;
      float arrCustBal[10];
      
      arrCustBal[0]=0.00;
      arrCustBal[1]=45.43;
      arrCustBal[2]=71.23;
      arrCustBal[3]=301.56;
      arrCustBal[4]=9.08;
      arrCustBal[5]=192.41;
      arrCustBal[6]=389.00;
      arrCustBal[7]=229.67;
      arrCustBal[8]=18.31;
      arrCustBal[9]=59.54;
      
      for(i=0;i<10;i++)
      {
       printf("The value at postition %d is %.2f\n", i,arrCustBal[i]);
      }
             
      getch();
      return(0);
      }
      
