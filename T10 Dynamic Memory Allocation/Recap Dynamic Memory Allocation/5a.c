#include <stdio.h>
#include <string.h>

int main ()
{
   //char str[50];
   int *p;
   p=malloc(250*sizeof(int));

   //strcpy(str,"This is string.h library function");
   //puts(str);

   //memset(str,'$',7);
   //puts(str);
   
   printf("p = %d",sizeof(p));
   
   getch();
   return(0);
}
