/* Practical 7 Arrays
   Ex2: Enter a customer number and return the current balance on the users account */
   
// added extra output for invalid customer number

/* Joe O'Regan */
/* 19-10-2015 */

#include<stdio.h>
main()
{
      int i=0,j=0,k=1,userSelection;
      int arrCustNum[10]={313,453,502,101,892,475,792,912,343,633};
      float arrCustBal[10]={0.00,45.43,71.23,30.56,9.08,192.41,389.00,229.67,18.31,59.54};
    
	  for(i=0;i<10;i++)
      {
    	// outputs the value of the custNum & CustBal arrays
       printf("%d. The Balance For Customer Number: %d is %.2f\n", i+1,arrCustNum[i], arrCustBal[i]);
      } // end of print customer number & balance for loop
	  	  
	  printf("Please Enter A Customer Number: ");
	  scanf("%d",&userSelection);
	  
	  for(j=0;j<10;j++)
      {
      	// check a/c balance
      	if (arrCustNum[j]==userSelection)
      	{
         printf("The Balance For Customer Number: %d is %.2f\n", arrCustNum[j], arrCustBal[j]);
		}
		else 
		{
		k++; // k will increment 10 times if no custnum found, otherwise only 9
		}
      } // end of return current balance for loop
	 
	// if it goes through 10 times without finding a customer Number, this message is output          
	if (k>10)
	{
		printf("The Account Was Not Valid\n");
	}
	             
      getch();
      return(0);
      }
      
      
