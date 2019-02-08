/*str -- This is a pointer to the block of memory to fill.

c -- This is the value to be set. The value is passed as an int, 
but the function fills the block of memory using the unsigned char 
conversion of this value.

n -- This is the number of bytes to be set to the value.
*/

#include <stdio.h>
#include <string.h>

int main ()
{
   char str[50];

   strcpy(str,"Joe O'Regan");
   printf("String: ");
   puts(str);
   
   printf("String with memset: ");
   memset(str,'X',3);
   puts(str);
   
   getch();
   return(0);
}
