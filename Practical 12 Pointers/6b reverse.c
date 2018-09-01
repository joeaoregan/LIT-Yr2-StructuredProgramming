/* Practical: Arrays and Pointers */
/* Joe O'Regan */
/* 19-11-2015 */

#include <stdio.h>

void reverseFunct1(char x[]);

//char string[50];
//char rev[50];

main()
{
	char string[50];
	
	printf("Enter String: ");
	gets(string);

	//printf("String Entered: ");
	//puts(string);
	
	reverseFunct1(string);
	
 	getch();
 	return(0);
}

reverseFunct1(char x[])
{
	char rev[50];
	
	strcpy(rev,x);
	strrev(rev);

	printf("String Entered: ");
	puts(x);	
	printf("String Reversed: ");
	puts(rev);
}
