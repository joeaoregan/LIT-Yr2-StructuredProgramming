// slide 21

#include <stdio.h>
#include <string.h>

int main()
{
 char s1[100]="A Place for Everything ";
 char s2[]="and Everything in its place";
 char s3[100]="The Truth is Rarely Pure";
 char s4[]="and Never Simple - Oscar Wilde"; 
 
 strcat(s1,s2);				// adds s2 to s1
 printf("\n%s\n",s1);
 
 strncat(s3,s4,17);			// adds part of s4 to s3
 printf("\n%s\n",s3);
 
 //printf("\n%s\n",s3);
 
 strncat(s3,(s4+17),14);	// adds 2nd part of s4 to s3 (already includes 1st part of s4)
 printf("\n%s\n",s3);


 getch();
 return(0);
}
