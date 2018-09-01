/* Exercise 3: Use While, Do while and for loop to print out the numbers from 1 to 10 */
/* for loop */

/* Joe O'Regan */
/* 30-09-2015 */

#include<stdio.h>
main()
{
      printf("The numbers from 1 to 10\n");
      
      int count;
      for(count=1;count<=10;count++)
      {
          printf("%d\n", count);                              
      }
             
      getch();
      return(0);
}
      
