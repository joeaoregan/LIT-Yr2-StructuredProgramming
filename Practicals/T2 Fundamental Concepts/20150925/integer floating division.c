/* Practical - prefix and postfix operators*/

/* Joe O'Regan */
/* 25-09-2015*/

#include<stdio.h>
main()
{
      int myinteger;
      float myfloating;
      
      myfloating=10.0/2.0;
      myinteger=1/3;
      
      
      printf("floating: %f\n",myfloating);
      printf("integer: %d\n",myinteger);
      
      myfloating = 3.0 / 2.0;
      printf("floating: %f\n",myfloating);
      
      myinteger = myfloating;
      printf("integer: %d\n",myinteger);      
             
      getch();
      return(0);
      }
      
