/* Exercise 6: Using a for loop enter in 8 numbers from the keyboard */
/* Calculate the min of all numbers entered

/* Joe O'Regan */
/* 30-09-2015 */

#include<stdio.h>
main()
{
      int i=1;
      int min;
      int input;
      
   	    
       
	  printf("Enter Number: ");
	  scanf("%d",&input);
	  min=input;  
        
      for(i=1;i<5;i++)
      {
          printf("Enter Number: ");
		  scanf("%d",&input);
		  
		  if (input<min) 
		  {
		  min=input;
		  }                      
      }
		printf("\nThe min number is: %d",min);         
                 
      getch();
      return(0);
      }
      
