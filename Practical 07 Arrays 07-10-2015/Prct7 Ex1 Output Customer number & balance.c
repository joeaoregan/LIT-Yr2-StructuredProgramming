/* Practical 7 Arrays 
   Ex1: Customer Number & Customer Balance */

/* Joe O'Regan */
/* 19-10-2015 */

#include<stdio.h>
main()
{
      int i=0;
      int arrCustNum[10]={313,453,502,101,892,475,792,912,343,633};
      float arrCustBal[10]={0.00,45.43,71.23,30.56,9.08,192.41,389.00,229.67,18.31,59.54};
            
      
      for(i=0;i<10;i++)
      {
    	// outputs the value of the custNum & CustBal arrays
       printf("%d. The Balance For Customer Number: %d is %.2f\n", i+1,arrCustNum[i], arrCustBal[i]);
      } // end of for loop
                 
      getch();
      return(0);
      }
      
