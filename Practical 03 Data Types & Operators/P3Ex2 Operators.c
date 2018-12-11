/* Practical 3 - Operators*/

/* Joe O'Regan */
/* 25-09-2015*/

#include<stdio.h>
main()
{
      //Arithmetical Operators
      int x=10;
      int y=20;          
      
      printf("Arithmetical Operators:\n");
      
      //add   
      printf("If x is %d and y is %d\n\n", x,y);
      x+=y;
      printf("x+=y is %d OR x + y is %d\n", x,x);
      
      //subtract
      printf("\n\nIf x is %d and y is %d\n", x,y);
      x-=y;
      printf("x-=y is %d OR x - y is %d\n", x,x);
      
      x=4;
      y=2;
      printf("\nif x is %d and y is %d\n",x,y);
      printf("x * y = %d\n", x*y);
      printf("x / y = %d\n", x/y);
      printf("x %% y = %d\n", x%y);
      
      //Unary Operators
      printf("\n\nUnary Operators:\n");
      printf("Where x =7 and y=5\n");
      x=7;
      y=5;
      printf("++x = %d\n", ++x);
      printf("--y = %d\n", --y);
      printf("x-- = %d\n", x++);
      printf("y++ = %d\n", y--);
	     
      //Relational Operators
      printf("\n\nRelational Operators:\n");
      printf("Where x=10 and y=4\n\n");
      x=10,y=4;   
             
      printf("x > y = %d\n",x>y);
      printf("x < y = %d\n",x<y);
      printf("x >= y = %d\n",x>=y);
      printf("x <= y = %d\n",x<=y);
      
	  //Equality Operators
	  printf("\n\nEquality Operators:\n");
	  printf("Where x=3 and y=5\n");
	  x=3;y=5;
	  printf("x == y = %d\n", x==y);
	  printf("x |= y = %d\n", x|=y);
	  
      //Logical Operators
      printf("\n\nLogical Operators:\n");
      printf("Where x=1 and y=0\n\n");
      x=1,y=0;
      
      printf("x && y = %d\n", x&&y);
      printf("x || y = %d\n", x||y);
      printf("!x = %d\n", !x);
      printf("!y = %d\n", !y);
      
      //Bit Level Operators
      printf("\n\nBit Level Operators\n:");
      printf("Where x=1 and y=1\n");
      x=1;y=2;
      
      printf("x & y = %d\n", x&y);
      printf("x | y = %d\n", x|y);
      printf("x ^ y = %d\n", x^y);
      printf("~x = %d\n",~x);
      printf("<< operator for 1 is %d\n", x<<2);
      printf(">> operator for 1 is %d\n", x>>2);
      
      
      
      
             
      getch();
      return(0);
      }
      
