/*
The C library function int strcoll(const char *str1, const char *str2) 
compares string str1 to str2. The result is dependent on the LC_COLLATE 
setting of the location.
*/
#include <stdio.h>
#include <string.h>

int main ()
{
   char str1[15];
   char str2[15];
   int ret;

   strcpy(str1, "abc");
   strcpy(str2, "ABC");

   ret = strcoll(str1, str2);

   if(ret > 0)
   {
      printf("str1 is less than str2");
   }
   else if(ret < 0) 
   {
      printf("str2 is less than str1");
   }
   else 
   {
      printf("str1 is equal to str2");
   }
   
   getch();
   return(0);
}
