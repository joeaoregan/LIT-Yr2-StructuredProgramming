/* 
 Joe O'Regan
 19-11-2015
*/

#include <stdio.h>
#include <string.h>

main()
{
 char string[50];
 char reverse[50];
 
 printf("Enter string: ");
 gets(string);
 
 strcpy(reverse,string);
 printf("\nstring copy: %s",reverse);
 
 strrev(reverse);
 printf("\nstring reversed: %s",reverse);
 
if(strcmp(reverse,string)==0) printf("\nString is a palindrome");
else  printf("\nString is NOT a palindrome");
 
 getch();
 return(0);
}
