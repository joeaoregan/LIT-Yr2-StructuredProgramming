// slide 28

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
 char str[]="Hello";
 int i=0;

 printf("\nBefore Conversion: %s\n",str);
 
 for(i=0;i<strlen(str);i++)
 {                             
  str[i]=toupper(str[i]);
 }
 
 printf("\nAfter Conversion: %s\n",str);


 getch();
 return(0);
}
