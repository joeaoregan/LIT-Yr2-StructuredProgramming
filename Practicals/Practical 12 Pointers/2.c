/* Practical: Arrays and Pointers */
/* Joe O'Regan */
/* 19-11-2015 */

#include<stdio.h>
main()
{
	int x = 99;
	int y = 10;
	int *px,*py;
	
	px=&x;
	py=&y;
	
	printf("x: %d y: %d\n",x,y);
	
	if(px<py) printf("\npx is less than py");
	else if (px==py) printf("\npx equals py");
	else printf("\npx is greater than py");
	
	if(px<=py) printf("\npx is less than or equal to py");
	else if (px>=py) printf("\npx is greater than or equal to py");
	
	if(px!=py) printf("\npx is not equal to py");
	else if (px==py) printf("\npx equals py");
	
	if(px!=NULL) printf("\npx is not equal to NULL");
	else if (px==NULL) printf("\npx equals NULL");
	if(py!=NULL) printf("\npy is not equal to NULL");
	else if (py==NULL) printf("\npy equals NULL");
	
	
	getch();
	return(0);
}
