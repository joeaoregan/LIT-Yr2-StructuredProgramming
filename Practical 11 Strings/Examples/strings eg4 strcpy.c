#include <stdio.h>
#include <string.h>

int main()
{
 char s1[]="Larger Text String", s2[] = "Smaller String";
 
 printf("\n%s:%d elements",s1,sizeof(s1));					// sizeof - size of s1
 printf("\n:%d characters\n",strlen(s1));					// strlen - number of characters in s1
 
 printf("\n\nOutput contents of s1\n");
 puts(s1); 													// puts - output string s1
 
 strcpy(s1,s2);												// strcpy - copies s2 to s1							
 printf("\n\nOutput contents of s1 after swap\n");
 puts(s1); 													// output content of string s1 after swap
 
 printf("\n%s:%d elements",s1,sizeof(s1));
 printf("\n:%d characters\n",strlen(s1));
 
 printf("\n\nOutput contents of s1\n");
 puts(s1);
 strncpy(s1,s2,5); 											// sets size of array to 5
 s1[5]='\0'; 												// cuts off rest of characters
 
 printf("\n\nOutput contents of s1 afters swap\n");
 puts(s1);
 
 printf("\n%s:%d elements",s1,sizeof(s1));
 printf("\n:%d characters\n",strlen(s1));
 
 getch();
 return(0);

}
