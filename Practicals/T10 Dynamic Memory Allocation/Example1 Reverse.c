/* Program Demonstrates Dynamic Memory Allocaation*/
/*Utilizing a Char Pointer to define a String of Text*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  char *s;
  register int t;
   
  s = malloc(80);
  
  if(s==NULL){
  printf("Memory request failed\n");
  }
  
  printf("Please enter a line of text\n");
  gets(s);
  for(t=strlen(s)-1;t>=0;t--)
    putchar(s[t]);
    
  free(s);  
     
 getch();   
 return(0);    
   
}
