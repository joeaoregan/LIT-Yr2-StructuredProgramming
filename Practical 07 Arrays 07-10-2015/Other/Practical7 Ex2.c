/* Practical 7 Arrays Ex1 */

/* Joe O'Regan */
/* 07-10-2015 */

#include<stdio.h>
main()
{
      int i,j,k;
      int arrCustNum[10];
      float arrCustBal[10];
      
      
      for(j=0;j<10;j++)
      {
      // Enter Data For Customer Numbers
      printf("Enter Array Postion %d customer number: ",j);
      scanf("%d",&arrCustNum[j]);
            
      printf("Enter Customer Balance: ");
      scanf("%f",&arrCustBal[j]);
      }
      
      for(i=0;i<10;i++)
      {
      printf("Customer No: %d Balance: %.2f\n", arrCustNum[i],arrCustBal[i]);
      }    
      
      int input;
      printf("Please Enter A Customer Number: ");
      scanf("%d",&input); 
      
      for(k=0;k<10;k++)
      {
       if (input==arrCustNum[k])
       {
        printf("Balance For Customer %d: %.2f\n",arrCustNum[k],arrCustBal[k]);
                        if (arrCustBal[k]<100)
                        {
                         printf("This Customer plenty of credit");                      
                        }
       }                       
      }
        
        
      getch();
      return(0);
      }
      
