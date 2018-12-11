#include <stdio.h>
#include <string.h>

int main()
{
 char s1[100]="A Place for Everything ";
 char s2[]="and Everything in its place";
 char s3[100]="The Truth is Rarely Pure ";
 char s4[]="and Never Simple - Oscar Wilde";
 
 strcat(s1,s2);
 printf("\n%s\n",s1);
 
 strncat(s3,s4,17);
 printf("\n%s\n",s3);
 
 strncat(s3,(s4+25),14); // takes everything after 17th character from s4 and adds to s3
 printf("\n%s\n",s3);
 
 getch();
 return(0);

}
