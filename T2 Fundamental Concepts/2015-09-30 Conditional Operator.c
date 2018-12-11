/* 30-09-2015: Program to Demonstrate the Use of a Conditional Operator */

/* Joe O'Regan */
/* 08-10-2015 */

#include<stdio.h>
main()
{
      int x=1; /* Binary 1 = 00000001 */
      int y=2; /* Binary 2 = 00000010 */
      
      printf("The & Operator for 1 and 2 is %d", x&y);
      /* 00000000=0 */
      printf("\nThe | Operator for 1 and 2 is %d",x|y);
      /* 00000011=3 */
      printf("\nThe ^ Operator for 1 and 2 is %d",x^y);
      /* 00000011=3 */
      printf("\nThe << Operator for 1 is %d",x<<2);
      /* 00000100=4 */
      printf("\nThe >> Operator for 1 is %d",x>>2);
      /* 00000000=0 */
      printf("\nThe ~ Operator for 1 is %d",~x);
      /* 11111110=0 */
      printf("\nThe ~ Operator for 2 is %d",~y);
	  /* 11111101=  */
	               
      getch();
      return(0);
      }
      
