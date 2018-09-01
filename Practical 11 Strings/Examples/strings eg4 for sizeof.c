#include <stdio.h>
#include <string.h>

int main()
{
 char s1[]="Larger Text String", s2[] = "Smaller String";
 
 printf("\n%s:%d elements",s1,sizeof(s1));
 printf("\n:%d characters\n",strlen(s1));
 
 strcpy(s1,s2);
 
 printf("\n%s:%d elements",s1,sizeof(s1));
 printf("\n:%d characters\n",strlen(s1));
 
 strncpy(s1,s2,5);
 s1[5]='\0';
 
 printf("\n%s:%d elements",s1,sizeof(s1));
 printf("\n:%d characters\n",strlen(s1));
 
 getch();
 return(0);

}
