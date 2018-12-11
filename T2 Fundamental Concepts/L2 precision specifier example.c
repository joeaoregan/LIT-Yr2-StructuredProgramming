/* Lecture 2 - precision specifier example */

/* Joe O'Regan */
/* 10-10-2015 */

#include<stdio.h>
int main()
{
   float item;
   item = 10.12304;

   printf(" %f\n",item); 
   printf(" %.4f\n",item);
   printf(" %.2f\n",item);
   
   getch(); 
   return(0);
}
