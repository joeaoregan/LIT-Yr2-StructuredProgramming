/* Exercise 7: Using for loops */
/* Calculate the average of multiple lists of integers numbers */

/* Joe O'Regan */
/* 30-09-2015 */

#include<stdio.h>
main()
{
      int listAmount=0;
      int i,j,numAmount=0;;
      float input,average,sum;
      
      printf("Enter amount of lists: ");
      scanf("%d",&listAmount);
      
      for(j=0;j<listAmount;j++)
      {
       printf("Enter amount of numbers: ");
       scanf("%d",&numAmount);
   	  
	   for(i=0;i<numAmount;i++)
       {
                               
           printf("Enter number: ");
           scanf("%f",&input);
                 
           sum+=input;
        } // end of number for
      
	  
	    average = sum/numAmount;
	    printf("The average of the numbers is %.2f\n", average);
        sum=0;         
      } // end of list for  
           
      getch();
      return(0);
      }
      
