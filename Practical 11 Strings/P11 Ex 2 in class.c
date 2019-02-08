#include <stdio.h>
#include <string.h>

int main()
{ 
 calclength();
 
 getch();
 return(0);

}
calclength()
{   
 char name[] = "Mary";
 int length = 0;
 length = strlen(name);
 printf("The length of the string is %d",length);
}
