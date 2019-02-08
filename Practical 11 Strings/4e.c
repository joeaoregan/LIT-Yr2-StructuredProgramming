/*
The C library function char *strpbrk(const char *str1, const char *str2) 
finds the first character in the string str1 that matches any character 
specified in str2. This does not include the terminating null-characters.
*/

#include <stdio.h>
#include <string.h>

int main ()
{
   const char fname[] = "Joe";
   const char lname[] = "O'Regan";
   char *ret;

   ret = strpbrk(fname, lname);
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
