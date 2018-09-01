/* Exercise 5: Using a do while loop enter in 8 numbers from the keyboard */
/* Calculate the average of all numbers entered

/* Joe O'Regan */
/* 30-09-2015 */

#include<stdio.h>
main()
{
      int i=1;
      float sum=0;
      float input,average;
      
   	  
	  printf("Average of 5 numbers entered:\n");      
      do
      {
                 printf("Enter number: ");
                 scanf("%f",&input);
                 i++;
                 sum+=input;
      }
      while(i<=5);
	  
	  average = sum/5;
	  printf("The average of the numbers is %.2f\n", average);        
                 
      getch();
      return(0);
      }
      
