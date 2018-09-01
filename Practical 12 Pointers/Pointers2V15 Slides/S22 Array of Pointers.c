#include <stdio.h>

main()
{
int x=7;
int *px[10];
 
px[2] = &x;
     
printf("\n The address of x is: %p", &x); 
printf("\n The address contained at x[2]is:%p", px[2]);
printf("\nThe Value contained at the address pointed to by x[2]is:%d",*px[2]);

 	
 	getch();
 	return(0);
}

