/*Practical 4: C Fundamentals*/

/*Joe O'Regan*/
/*Created on 18/09/2015*/


#include <stdio.h>
main()
{
      float s,t;
      
      printf("How much? ");
      /*address of operator*/
      scanf("%f",&s);
      
      t=.33*s;
      
      printf("You owe %.2f in taxes.",t);
            
      getch();
      return(0);
      }
