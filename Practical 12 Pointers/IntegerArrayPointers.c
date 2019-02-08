#include <stdio.h>
 
const int SIZE = 3;
 
int main () {

   int  arrPointers[] = {10, 100, 200};
   int i, *ptr[SIZE];
 
   for ( i = 0; i < SIZE; i++) {
      ptr[i] = &arrPointers[i]; /* assign the address of integer. */
   }
   
   for ( i = 0; i < SIZE; i++) {
      printf("Array Position %d = %d\n", i, *ptr[i] );
   }
   
   getch();
   return(0);
}
