/* Practical 7 Arrays Ex1 */

/* Joe O'Regan */
/* 07-10-2015 */

#include<stdio.h>
main()
{
      int i=0,j=0;
      int arrCustNum[10];
      
      
      for(j=0;j<10;j++)
      {
      printf("Enter the number for the array position %d ", j);
      scanf("%d",&arrCustNum[j]);
      }
      
      
      for(i=0;i<10;i++)
      {
       printf("The value at postition %d is %d\n", i,arrCustNum[i]);
      }
        
      getch();
      return(0);
      }
      
