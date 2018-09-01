/* Practical 7 Arrays 
   Ex3: Customer Number & Customer Balance */

/* Joe O'Regan */
/* 21-10-2015 */

#include<stdio.h>
main()
{
      int i,j,userNum;
      int arrCustNum[10]={313,453,502,101,892,475,792,912,343,633};
      float arrCustBal[10]={0.00,45.43,71.23,30.56,9.08,192.41,389.00,229.67,18.31,59.54};
      float credit;      
      
      for(i=0;i<10;i++)
      {
    	// outputs the value of the custNum & CustBal arrays
       printf("%d. \tThe Balance For Customer Number: %d is %.2f\n", i+1,arrCustNum[i], arrCustBal[i]);
      } // end of for loop
      
      printf("\nPlease Enter An Account Number: ");
      scanf("%d",&userNum);
      
      for(j=0;j<10;++j)
      {
       if(userNum==arrCustNum[j])
       {
        printf("For Selected Customer No: %d Balance: %.2f",arrCustNum[j],arrCustBal[j]);
         
         // calculate if discount
         if(arrCustBal[j] > 100)
         {
             printf("\nCustomer has no more credit");
         }
         else if (arrCustBal[j] <= 100)
         {
            credit = 100 - arrCustBal[j];
            printf("\nCustomer has %.2f credit", credit);
         } // end of nested if
         
         else
         printf("Credit not calculated");
        }
       
      } // end of for loop
                 
      getch();
      return(0);
      }
      
