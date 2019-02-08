/* pointers 1 S13 */

#include <stdio.h>

main()
{
 int u1,u2;
 int v=3;
 int *pv;			/* pointer to an integer */
 
 u1=2 * (v + 5);  	/* Ordinary Expression */
 
 pv=&v;				/* assigns the address of v to pv */
 
 u2=2 * (*pv + 5);  /* Ordinary Expression */
 
 printf("\nu1=%d u2=%d",u1,u2);

 getch();
 return(0);
 }

