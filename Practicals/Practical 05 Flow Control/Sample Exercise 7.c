/* Exercise 7: Sample

/* Joe O'Regan */
/* 08-10-2015 */

#include<stdio.h>
main()
{
      int num_of_lists=0;
      int num_of_items=0;
      float num_in=0; // change to float
      int i=0;
      int j=0;
      float sum=0; //change to float
      float average;
      
      printf("Please enter the number of lists you wish to evaluate\n");
      scanf("%d",&num_of_lists);
      
      printf("How many list items do you wish to evaluate for each list\n");
      scanf("%d",&num_of_items);
       
      // missing for loop for number of lists 
      for(i=0;i<num_of_items;i++)
      {
      printf("Please enter a number ");
      scanf("%f",&num_in);
                 
      sum = sum + num_in;
      } // end of items for
      
	  average = sum / num_of_items;
	  printf("The Average Number for list %d is = %f\n",i,average);
     
           
      getch();
      return(0);
      }
      
