#include <stdio.h>

void func1(float,float);
void func2(float *,float*);

main()
{
 float u=2.5;
 float v=3.5;
 float *pv;			/*pointer to a float*/
 float *pu;			/*pointer to a float*/
 pv=&v;			/*assigns the address of v to pv*/
 pu=&u;			/*assigns the address of u to pu*/
 
 printf("\nBefore calling func1: \tu=%f \tv=%f",u,v);
 func1(u,v);
 printf("\nAfter calling func1: \tu=%f \tv=%f",u,v);
 func2(&u,&v);
 printf("\nAfter calling func1: \tu=%f \tv=%f",u,v);
 
 getch();
 return(0);
}

// only alters inside fuction
void func1(float u,float v)
{
 u=0;
 v=0;
 
 printf("\nWithin func1: \t\tu=%f \tv=%f",u,v);
 
 return;    
}     

// alters inside and outside function
void func2(float *pu,float *pv)
{
 *pu=0;
 *pv=0;
 
 printf("\nWithin func2: \t\tu=%f \tv=%f",*pu,*pv);
 return;    
} 
