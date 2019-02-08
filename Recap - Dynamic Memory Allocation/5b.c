#include <stdio.h>
#include <string.h>

int main ()
{
   //char str[50];
   //int *p;
   //p=malloc(250*sizeof(int));
   //char *q;
   //q=malloc(50*sizeof(char));
	int i;
	float *r;
	r=malloc(25*sizeof(float));
	memset(r,0,25);
   //strcpy(str,"This is string.h library function");
   //puts(str);

   //memset(str,'$',7);
   //puts(str);
   
   //printf("p = %d",sizeof(p));
   //printf("\nq = %d",sizeof(q));
	printf("size of r = %d",sizeof(r));
	for(i=0;i<25;i++)
	{
	 printf("\nr[%d] = %f",i,r[i]);
	}
   
   
   getch();
   return(0);
}
