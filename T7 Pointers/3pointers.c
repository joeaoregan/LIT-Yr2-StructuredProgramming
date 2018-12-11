#include <stdio.h>
 
int main()
{
  int v=3;
  int *pv;        // pointer to an integer
  
  pv=&v;          // Assigns the address of v to pv
   
  printf("\n*pv=%d v=%d",*pv,v);
  
  *pv=0;
   
  printf("\n*pv=%d v=%d",*pv,v);
  
  getch(); 
  return 0;
}
