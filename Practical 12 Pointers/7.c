#include<stdio.h>
#include<string.h>

void *getInput();
char *pi;

int main(void)
{
  getInput();
  
  puts(pi);
  
  getch();
  return(0);
}

void *getInput()
{
	char input[50]="blah blah";
	//char *pi;
	pi=&input;
	return *pi;
	
	//printf("Enter string.\n");
	//gets(input);	
	//printf("Input: ");
	//puts(input);
	
	//puts(pi);
	
}
