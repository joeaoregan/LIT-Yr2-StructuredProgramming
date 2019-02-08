/* 
 Joe O'Regan
 19-11-2015
*/

#include <stdio.h>
#include <string.h>

int main()
{
 char welcome[50];
 
 printf("Enter string: ");
 gets(welcome);
 
 printf("\nstring: %s",welcome);
 
 getch();
 return(0);
}
