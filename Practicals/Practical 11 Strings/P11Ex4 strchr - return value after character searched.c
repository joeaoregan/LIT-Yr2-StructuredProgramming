/* 
strchr
Joe O'Regan
5-11-2015


*str -- This is the C string to be scanned.

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

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   getch();
   return(0);
}
