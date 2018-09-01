/* Practical: Arrays and Pointers */
/* Joe O'Regan */
/* 19-11-2015 */

#include <stdio.h>

main()
{
char a[]="Hello";
char b[]="my";
char c[]="name";
char d[]="is";
char e[]="Joe";
//printf("%s %s %s %s %s",a,b,c,d,e);

int *px[5];
//char *px[5];

//printf("\n The address contained at x[2]is:%p", px[2]);

px[0] = &a;
px[1] = &b;
px[2] = &c;
px[3] = &d;
px[4] = &e;

printf("String a + b + c + d + e: %s %s %s %s %s",px[0],px[1],px[2],px[3],px[4]);
	
 	getch();
 	return(0);
}

