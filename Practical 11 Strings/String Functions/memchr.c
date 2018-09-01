#include <stdio.h>
#include <string.h>

int main ()
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("String after \"%c\" is - \"%s\"\n", ch, ret);

   getch();
   return(0);
}
