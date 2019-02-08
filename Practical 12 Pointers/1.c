/* Practical: Arrays and Pointers */
/* Joe O'Regan */
/* 19-11-2015 */

#include<stdio.h>
main()
{
	int x = 99;
	int *px,*py;
	
	printf("x: %d\n",x);
	px=&x;	
	py=px;
	
	*py=5;
	
	printf("the value of px: %d py: %d x: %d",px,py,x);
	
	getch();
	return(0);
}
