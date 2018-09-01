/* Exercise 3: Use While, Do while and for loop to print out the numbers from 1 to 10 */
/* Do While */

/* Joe O'Regan */
/* 30-09-2015 */

#include<stdio.h>
main()
{
      int i=1;
      
      printf("The numbers from 1 to 10 are:\n");      
      do
      {
                 printf("i is %d\n", i);
                 i++;
      }
      while(i<=10);
       
             
      getch();
      return(0);
}
      
