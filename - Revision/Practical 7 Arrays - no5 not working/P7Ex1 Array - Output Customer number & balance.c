/* Practical 7 Arrays 
   Ex1: Customer Number & Customer Balance */

/* Joe O'Regan */
/* 21-10-2015 */

#include<stdio.h>
main()
{
      int i,j,k,userNum,sort1,sort2;
      
      int arrCustNum[10]={313,453,502,101,892,475,792,912,343,633};
      float arrCustBal[10]={0.00,45.43,71.23,30.56,9.08,192.41,389.00,229.67,18.31,59.54};
            
      
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
       }
      } // end of for loop
       
      for(i=0;i<10;++i)
      {
       for(j=0;j<10;++j)
       {
        if (arrCustNum [i] > arrCustNum[j])
            {
                
                sort1 = arrCustNum[i];
                sort2 = arrCustBal[j];
                
                arrCustNum[i] = arrCustNum[j];
                arrCustBal[i] = arrCustBal[j];
                
                arrCustNum[j] = sort1;
                arrCustBal[j] = sort2;
                
                                
            } 
        } // end of j for
       } // end of i for
       
       printf("The numbers arranged in ascending order are: \n");
       for (i = 0; i < 10; ++i)
       {
        printf("CustNum %d CustBal %.2f\n", arrCustNum[i],arrCustBal[i]);
        } // end of print for
        
      getch();
      return(0);
      }
      
