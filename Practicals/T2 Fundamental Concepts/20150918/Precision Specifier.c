/*This program outputs the value of the float item to different decimal places*/

/*Joe O'Regan*/
/*18/09/2015*/

#include<stdio.h>
int main()
{
      float item;
      item=10.12304;
      
            
      printf("%f\n",item);            
      printf("%.4f\n",item);            
      printf("%.2f\n",item);
      
      getch();
      return(0);
      }
      
