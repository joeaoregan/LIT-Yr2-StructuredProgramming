/* Slide 13: Passing Arguments to Functions */

/* Joe O'Regan */
/* 23-10-2015 */

#include <stdio.h>

void funct(int);
void funct(int b)
{ 
   printf("%d was the value passed to the function \n",b);    
}

int main()
{
 int a=5;
 funct(a);
 printf("This is the main function\n");    
        
 getch();   
 return(0);   
} 

