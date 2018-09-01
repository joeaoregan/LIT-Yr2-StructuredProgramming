#include <stdio.h>
 
char * getInput( );

int main ()
{
	char *pointer;

	pointer = getInput();
   
 	getch();
	return (0);
}

char * getInput( ) 
{
	//char  str[]="Test Fuction";
	char str[50];
	printf("Enter String: ");
	gets(str);
	puts(str);
	
	return str;
}
