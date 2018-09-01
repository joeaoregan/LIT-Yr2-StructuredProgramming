/* Practical: Arrays and Pointers */
/* Joe O'Regan */
/* 19-11-2015 */

#include <stdio.h>

main()
{
	char string[50];
 	char reverse[50];
 	
	printf("Enter String: ");
	gets(string);

	strcpy(reverse,string);
	strrev(reverse);

	printf("String Entered: ");
	puts(string);	
	printf("String Reversed: ");
	puts(reverse);
	
 	getch();
 	return(0);
}

reverse()
{

}
