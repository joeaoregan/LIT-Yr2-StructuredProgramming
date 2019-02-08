/* do-while loop */

/* Joe O'Regan */
/* 30-09-2015 */

#include<stdio.h>
main()
{
      int i=10;
      
      printf("The numbers from 10 to 20 are:\n");      
      do
      {
                 printf("i is %d\n", i);
                 i++;
      }
      while(i<=20);
      
      i=20;
      
      printf("The numbers from 20 to 10 are:\n");
      
      do
      {
          printf("i is %d\n", i);
          i--;      
      }
      while(i>=10);
    
             
      getch();
      return(0);
}
      
