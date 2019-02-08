/* Lecture 3 - float / integer divide */

/* Joe O'Regan */
/* 10-10-2015 */

#include<stdio.h>
int main()
{
   int myinteger;
   float myfloating;

    myfloating=10.0/2.0;
    myinteger=1/3;
   
    printf("floating %f\n",myfloating);
    printf("integer %d\n",myinteger);
   
    myfloating = 3.0 / 2.0;
    printf("floating: %f\n",myfloating);
    
    myinteger = myfloating;
    printf("integer: %d\n",myinteger);
    
    getch();    
	return(0);   
} 

