/* Practical: Arrays and Pointers */
/* Joe O'Regan */
/* 19-11-2015 */

#include <stdio.h>

void reverseFunct1(char x[]);
void reverseFunct2(char *y);

main()
{
	char string[50];
	char *ps;
	
	ps=&string;	
	
	printf("Enter String: ");
	gets(string);

	reverseFunct1(string);
	reverseFunct2(&string[0]);
	reverseFunct3(ps);
	
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

reverseFunct2(char *y)
{
	char rev2[50];
	
	strcpy(rev2,y);
	strrev(rev2);

	printf("Function 2 - String Entered: ");
	puts(y);	
	printf("Function 2 - String Reversed: ");
	puts(rev2);
}
reverseFunct3(char *z)
{
	char rev3[50];
	
	strcpy(rev3,z);
	strrev(rev3);

	printf("Function 3 - String Entered: ");
	puts(z);	
	printf("Function 3 - String Reversed: ");
	puts(rev3);
}
