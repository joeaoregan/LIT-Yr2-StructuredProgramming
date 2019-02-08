#include <stdio.h>
 
const int SIZE = 4;
 
int main () {

   char *string[] = {
      "Test 01",
      "Test 02",
      "Test 03",
      "Test 04",
   };
   
   int i = 0;

   for ( i = 0; i < SIZE; i++) {
      printf("String %d = %s\n", i, string[i] );
   }
   
   getch();
   return (0);
}
