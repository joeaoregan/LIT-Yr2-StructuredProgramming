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
   const char fname[] = "Joe";
   const char lname[]  = "O'Regan";

   printf("Before memmove First Name: %s, Last Name: %s\n", fname, lname);
   memmove(fname, lname, 7);
   printf("After memmove First Name: %s, Last Name: %s\n", fname, lname);
   
   getch();
   return(0);
}
