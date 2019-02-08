#include <stdio.h>

main()
{
 int u=3;
 int v;
 int *pu;   /*pointer to an integer*/
 int *pv;	/*pointer to an integer*/
 
 pu=&u;		/*assigns the address of u to pu*/
 v=*pu;		/*assigns the value of u to v*/
 pv=&v;		/*assigns the address of v to pv*/
 
 printf("\n u=%d  &u=%X pu=%X *pu=%d",u,&u,pu,*pu);
 printf("\n\n v=%d  &v=%X pv=%X *pv=%d",v,&v,pv,*pv);

 getch();
 return(0);
 }

