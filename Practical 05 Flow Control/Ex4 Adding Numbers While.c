/* Exercise 4: Using a while loop enter in 8 numbers from the keyboard */
/* Calculate the sum of all numbers entered

/* Joe O'Regan */
/* 30-09-2015 */

#include<stdio.h>
main()
{
      int i=1;
      int sum=0;
      int input;
      
      printf("Adding 5 numbers entered\n");
      
      while(i<=5)
      {
            printf("Enter number: ");
            scanf("%d",&input);
            i++;
            
            // data is not stored, overwritten
            sum+=input;
      }
                  
      printf("The sum of the numbers is %d", sum);            
                 
      getch();
      return(0);
      }
      
