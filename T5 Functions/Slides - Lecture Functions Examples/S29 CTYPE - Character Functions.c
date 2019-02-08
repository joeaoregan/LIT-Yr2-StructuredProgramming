/* Slide 29: CTYPE Example */

/* Joe O'Regan */
/* 23-10-2015 */

#include <stdio.h>
#include <ctype.h>

/*Demonstrates the Use of Character Functions*/
	
main()
{
		
	char testA = 'L';
	char testB = 'l';
	
	printf("\n%d isupper", isupper(testA)); // 1 
	printf("\n%c tolower", tolower(testA));
	printf("\n%d islower", islower(testA)); // 0
	printf("\n%c toupper", toupper(testB));
    
    getch();
    return(0);
}

