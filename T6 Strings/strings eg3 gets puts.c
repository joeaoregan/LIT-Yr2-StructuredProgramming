#include <stdio.h>

int main()
{
 char str[51];
 
 printf("Enter up to 50 characters with spaces:\n");
 gets(str);
 
 printf("get() read: ");
 puts(str);
 
 getch();
 return(0);

}
