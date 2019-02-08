/*
The C library function char *strpbrk(const char *str1, const char *str2) 
finds the first character in the string str1 that matches any character 
specified in str2. This does not include the terminating null-characters.
*/

#include <stdio.h>
#include <string.h>

int main ()
{
   const char str1[] = "abcde2fghi3jk4l";
   const char str2[] = "a36";
   char *ret;

   ret = strpbrk(str1, str2);
   if(ret) 
   {
      printf("First matching character: %c\n", *ret);
   }
   else 
   {
      printf("Character not found");
   }
   
   getch();
   return(0);
}
