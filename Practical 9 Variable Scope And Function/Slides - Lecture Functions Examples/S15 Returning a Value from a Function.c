/* Slide 15: Returning a Value from a Function */

/* Joe O'Regan */
/* 23-10-2015 */

#include <stdio.h>

int funct(int);

int main()
{
 int a=5;
 int ans;
 printf("This is the main function\n");    
 ans = funct(a);   				// outputs printf from funct    
 printf("The value returned from the function is:%d \n",ans);    
 getch();   
 return(0);   
}
int funct(int b){ 
   printf("This function squares the value: %d \n",b);
   b=b*b;
   return b;    }


