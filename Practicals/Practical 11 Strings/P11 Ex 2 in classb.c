#include <stdio.h>
#include <string.h>

int main()
{ 
 char name[]="Mary";
 
 calclength(name);
 
 getch();
 return(0);

}
calclength(char x[])
{   
 //char name[] = "Mary";
 int length = 0;
 length = strlen(x);
 printf("The length of the string is %d",length);
}
