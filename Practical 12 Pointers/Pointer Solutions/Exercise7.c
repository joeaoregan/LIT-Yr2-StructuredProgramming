#include <stdio.h>

char *funct();

int main()
{

 printf("%s",funct());
 
 getch();
 return(0);
}
char * funct()
{
 
 char *ret = "This is a msg from a function passed via a return pointer";
 return ret;     
}
 
