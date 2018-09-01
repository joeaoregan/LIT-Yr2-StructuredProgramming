#include <stdio.h>

main()
{
int x=7;
int y=8;
int z=9;
int *px[10];
 
px[2] = &x;
px[3] = &y;
px[4] = &z;
     
//printf("\n The address of x is: %p", &x); 
//printf("\n The address contained at x[2]is:%p", px[2]);
printf("\nThe Value contained at the address pointed to by: \nx[2]is:%d",*px[2]);
printf("\nx[3]is:%d",*px[3]);
printf("\nx[4]is:%d",*px[4]);

 	
 	getch();
 	return(0);
}

