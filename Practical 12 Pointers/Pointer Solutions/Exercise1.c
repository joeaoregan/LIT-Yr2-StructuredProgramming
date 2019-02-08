#include <stdio.h>

main()
{
 int x=99;
 int *px;			/*pointer to an integer*/
 int *py;			/*pointer to an integer*/
 
 px=&x;			/*assigns the address of v to pv*/
 
 printf("\n*pv=%d v=%d",*px,x);

 py=px;			/*reset v indirectly*/
 
 printf("\n*pv=%d v=%d",*px,*py);

 getch();
 return(0);
}
