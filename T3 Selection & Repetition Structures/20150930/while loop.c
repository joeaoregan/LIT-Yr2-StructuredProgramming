/* Use While loop to output the numbers 1 to 10 
   and the numbers from 10 to 1 */

/* Joe O'Regan */
/* 30-09-2015 */

#include<stdio.h>
main()
{
      int i=1;
      printf("The Numbers From 1 to 10\n");
      while(i<=10)
      {
                  printf("i is %d\n", i);
                  i++;
                  }
                  
      i=10;
      printf("The Numbers From 10 to 1\n");
      while(i>=1)
      {
                 printf("i is %d\n", i);
                 i--;
                 }
             
      getch();
      return(0);
      }
      
