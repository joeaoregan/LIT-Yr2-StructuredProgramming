#include<stdio.h>
#include<string.h>

void check(char *a ,char *b, int(*cmp)(const char *,const char*));


int main(void)
{
  char s1[80],s2[80];
  int (*p)(const char*,const char*);
  
  p = strcmp;
  
  printf("Enter two strings.\n");
  gets(s1);
  
  gets(s2);
  check(s1,s2,p);	
  
  getch();
  return(0);
  		  
}
void check(char *a,char *b,int(*cmp)(const char *,const char*))
{
 	 	printf("Testing for equality.\n");
        if(!(*cmp)(a,b))printf("Equal");
		else printf("Not Equal");	
}		  

