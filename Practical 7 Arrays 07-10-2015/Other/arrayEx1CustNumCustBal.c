/* Practical 7 Arrays Ex1 Customer Number & Customer Balance */

/* Joe O'Regan */
/* 07-10-2015 */

#include<stdio.h>
main()
{
      int i=0,j=0;
      int arrCustNum[10];
      float arrCustBal[10];
            
      arrCustNum[0]=313;
      arrCustNum[1]=234;
      arrCustNum[2]=456;
      arrCustNum[3]=567;
      arrCustNum[4]=678;
      arrCustNum[5]=123;
      arrCustNum[6]=321;
      arrCustNum[7]=432;
      arrCustNum[8]=543;
      arrCustNum[9]=645;
      
      for(i=0;i<10;i++)
      {
       printf("The value at postition %d is %d\n", i,arrCustNum[i]);
      }
      
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
      
      for(j=0;j<10;j++)
      {
       printf("The value at postition %d is %.2f\n", j,arrCustBal[j]);
      }
             
      getch();
      return(0);
      }
      
