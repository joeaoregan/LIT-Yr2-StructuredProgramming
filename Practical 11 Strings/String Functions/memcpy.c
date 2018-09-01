/*The C library function void *memcpy(void *str1, const void *str2, size_t n) 
copies n characters from memory area str2 to memory area str1.
*/

#include <stdio.h>
#include <string.h>

int main ()
{
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];

   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   
   getch();
   return(0);
}

