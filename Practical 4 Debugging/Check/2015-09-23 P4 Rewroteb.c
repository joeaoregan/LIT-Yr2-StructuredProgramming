/*Practical 4: C Fundamentals*/
/*Enter an amount, perform interest calculation on the amount, and output the interest*/

/*Joe O'Regan*/
/*Created on 18/09/2015*/


#include<stdio.h>
/*put in 'int main'*/
int main()
{
      float amount,interest;
      
      /*enter an amount*/
      printf("How much? ");
      scanf("%f",&amount);
      
      /*calculate the interest on the amount entered*/
      interest=.33*amount;
      
      /*Out put the calculated amount*/
      printf("You owe %.2f in taxes.",interest);
            
      getch();
      return(0);
      }
