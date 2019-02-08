#include <stdio.h>

main()
{
 int v=3;
 int *pv;			/*pointer to an integer*/
 
 pv=&v;			/*assigns the address of v to pv*/
 
 printf("\n*pv=%d v=%d",*pv,v);

 *pv=0;			/*reset v indirectly*/
 
 printf("\n*pv=%d v=%d",*pv,v);

 getch();
 return(0);
}

