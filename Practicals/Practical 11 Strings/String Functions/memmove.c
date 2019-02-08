/*str1 -- This is a pointer to the destination array where the content is to be copied,
type-casted to a pointer of type void*.

str2 -- This is a pointer to the source of data to be copied,
type-casted to a pointer of type void*.

n -- This is the number of bytes to be copied.
*/
#include <stdio.h>
#include <string.h>

int main ()
{
   const char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   
   getch();
   return(0);
}
