/*
The C library function int strcmp(const char *str1, const char *str2) 
compares the string pointed to, by str1 to the string pointed to by str2.
*/
#include <stdio.h>
#include <string.h>

int main ()
{
   char str1[15];
   char str2[15];
   int ret;


   strcpy(str1, "Joe");
   strcpy(str2, "O'Regan");

   ret = strcmp(str1, str2);
   
   printf("String 1: \"%s\"\n",str1);
   printf("String 2: \"%s\"\n",str2);
   
   if(ret < 0)
   {
      printf("str1 \"%s\" is less than str2 \"%s\"",str1,str2);
   }
   else if(ret > 0) 
   {
      printf("str2 \"%s\" is less than str1 \"%s\"",str2,str1);
   }
   else 
   {
      printf("str1 \"%s\" is equal to str2 \"%s\"",str1,str2);
   }
   
   getch();
   return(0);
}
