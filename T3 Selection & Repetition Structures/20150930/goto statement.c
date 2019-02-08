/* example of goto statement*/

/* Joe O'Regan */
/* 30-09-2015 */

#include<stdio.h>
main()
{
      float x=0;
      
      printf("Enter a Number\n");
      scanf("%f",&x);
      
      while(x<100)
      {
      if(x<0)
      goto errorcheck; //goto statement
      scanf("%f",&x);
      }
      errorcheck: //label
      {
      printf("ERROR NEGATIVE VALUE FOR X\n");
      }
      
      printf("End of Program\n");
                  
      getch();
      return(0);
      }
      
