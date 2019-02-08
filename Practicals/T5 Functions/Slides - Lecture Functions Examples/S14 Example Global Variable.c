/* Slide 14: Example Global Variable */

/* Joe O'Regan */
/* 23-10-2015 */

#include <stdio.h>

void funct();

int a=5;
int main()
{

 printf("This is an example of a global variable\n");    
 funct();       
 getch();   
 return(0);   
}
void funct()
{ 
   printf("%d this value can be accessed by the function \n",a);    
}


