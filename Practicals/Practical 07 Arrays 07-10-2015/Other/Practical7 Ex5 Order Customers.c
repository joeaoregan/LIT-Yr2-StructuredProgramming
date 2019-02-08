/* Practical 7 Arrays Ex5 */

/* Joe O'Regan */
/* 07-10-2015 */

#include<stdio.h>
main()
{
      int i,j,k,l,m;
      int arrCustNum[5];
      float arrCustBal[5];
      int input;
      
      for(j=0;j<5;j++)
      {
       // Enter Data For Customer Numbers
       printf("Enter Array Postion %d customer number: ",j);
       scanf("%d",&arrCustNum[j]);
      
       // Enter Customer Balance      
       printf("Enter Customer Balance: ");
       scanf("%f",&arrCustBal[j]);
      }
      
      for(i=0;i<5;i++)
      { // Output customer Number and Balance in stored order
       printf("\nCustomer No: %d Balance: %.2f", arrCustNum[i],arrCustBal[i]);
      }    
      
      // Input Customer Number to be displayed
      printf("\n\nPlease Enter A Customer Number: ");
      scanf("%d",&input); 
      
      for(k=0;k<5;k++)
      {
       if (input==arrCustNum[k])
       { // Output Balance for Customer Number entered
        	printf("\nBalance For Customer %d: %.2f\n",arrCustNum[k],arrCustBal[k]);
        	if (arrCustBal[k]<100)  // Check Customer Credit
            { 
            	printf("This Customer has plenty of credit\n");                      
            }
    	}
	  }
	// Sort Customer Numbers
	int a, o, n=5;
	for (l = 0; l < n; ++l)
    {
        for (m = l + 1; m < n; ++m)
        {
            if (arrCustNum[l] > arrCustNum[m])
            {
                a =  arrCustNum[l];
                arrCustNum[l] = arrCustNum[m];
                arrCustNum[m] = a;
            }
        }
    }
        
    // Print Customers to screen in order
	printf("\nCutomer Numbers and Balances arranged in ascending order are: \n");
    for (i = 0; i < n; ++i)
    {
	 printf("Customer: %d Balance: %.2f\n", arrCustNum[i], arrCustBal[i]);
	}
	
	
    getch();
    return(0);
    }
      
