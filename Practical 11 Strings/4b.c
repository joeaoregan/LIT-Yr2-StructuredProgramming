/*str -- This is the C string to be scanned.

c -- This is the character to be searched in str.
*/
#include <stdio.h>
#include <string.h>

int main ()
{
   const char str[] = "Joe O'Regan";
   const char ch = 'R';
   char *ret;

   ret = strchr(str, ch);
   printf("For The String \"%s\"\n",str);
   printf("String after \"%c\" is - \"%s\"\n", ch, ret);
   
   getch();
   return(0);
}
