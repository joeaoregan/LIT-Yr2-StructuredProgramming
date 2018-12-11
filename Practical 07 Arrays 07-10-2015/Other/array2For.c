/* Practical 7 Arrays Ex1 */

/* Joe O'Regan */
/* 07-10-2015 */

#include<stdio.h>
main()
{
      int i=0,j=0;
      int arrCustNum[10];
            
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
        
      getch();
      return(0);
      }
      
