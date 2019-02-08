#include <stdio.h>
#include <time.h>
 
/* function to generate and retrun random numbers. */
int * getRandom( ) {

   static int  r[10];
   int i;
 
	srand( (unsigned)time( NULL ) ); /* set the seed */
	
	for ( i = 0; i < 10; ++i)
	{
     r[i] = rand();
     printf("%d\n", r[i]);
	}
 
   return r;
}
 
/* main function to call above defined function */
int main () {

   /* a pointer to an int */
   int *p;
   int i;

   p = getRandom();
	
   //for ( i = 0; i < 10; i++ ) {
   //   printf("*(p + [%d]) : %d\n", i, *(p + i) );
   //}
 	getch();
	return (0);
}
