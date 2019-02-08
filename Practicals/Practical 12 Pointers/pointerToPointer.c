#include <stdio.h>
 
int main () 
{
   int  variable=1000;
   int  *pointer;
   int  **pointerToPointer;

   pointer = &variable; // pointer has the address of variable
   pointerToPointer = &pointer; // pointerToPointer has pointer address - address of operator &

   /* take the value using pptr */
   printf("Variable: %d\n", variable );
   printf("*pointer: %d\n", *pointer );
   printf("**pointerToPointer: %d\n", **pointerToPointer);

	getch();
	return(0);
}
