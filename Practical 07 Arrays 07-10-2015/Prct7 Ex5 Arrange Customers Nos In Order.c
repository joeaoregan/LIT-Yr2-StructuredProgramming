/* Practical 7 Arrays 
   Ex5: Customer Number & Customer Balance - arranged in order*/

/* Joe O'Regan */
/* 19-10-2015 */

#include<stdio.h>
main()
{
      int i,j,a;
      int arrCustNum[10]={313,453,502,101,892,475,792,912,343,633};
      float arrCustBal[10]={0.00,45.43,71.23,30.56,9.08,192.41,389.00,229.67,18.31,59.54};
      float b;
        
      // Print Customer Numbers & Balance In Original Order  
      printf("Customer Numbers And Balances As Stored In The Array:\n");
      
	  for(i=0;i<10;i++)
      {
    	// outputs the value of the custNum & CustBal arrays
       printf("%d.\tThe Balance For Customer Number: %d is %.2f\n", i+1,arrCustNum[i], arrCustBal[i]);
      } // end of for loop    
      
      
      // Sort Customer Numbers
     	for (i = 0; i < 10; ++i)
    	{
        for (j = i + 1; j < 10; ++j)
        	{
            if (arrCustNum[i] > arrCustNum[j])
            	{
                a = arrCustNum[i];
                b = arrCustBal[i];
                
                arrCustNum[i] = arrCustNum[j];
                arrCustBal[i] = arrCustBal[j];
                
                arrCustNum[j] = a;
                arrCustBal[j] = b;
            	}
        	} // end for 2
    	} // end for 1
    	
    	
    // Output Customer Numbers & Balances in order	
    printf("\n\nCustomer Numbers And Balances Arranged In Order\n");
    
    for (i = 0; i < 10; ++i)
        printf("%d.\tCustomer Number: %d Balance: %.2f\n", i+1,arrCustNum[i],arrCustBal[i]);          
      getch();
      return(0);
      }
      
