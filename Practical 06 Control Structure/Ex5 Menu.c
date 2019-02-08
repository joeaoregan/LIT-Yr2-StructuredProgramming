/* Practical 6 - Control Flow 2*/
/* Ex5 - Menu using a switch */

/* Joe O'Regan */
/* 10-10-2015 */

#include <stdio.h>
main()
{
	// can be int or char, do not use double or float
 	char userSelection=0;
 	
 	printf("Option 1. Register Patient Details\n");
 	printf("Option 2. Display Ward Details\n");
 	printf("Option 3. View On-Call Contacts\n");
 	printf("Option 4. View Visitors Log\n");
 	printf("Option 5. Register a Staff Member\n");
 	printf("Option 6. Exit\n");
 	
 	
	
	do
	{
 	printf("Please Enter Selection: ");
 	scanf(" %c", &userSelection);
 	
	switch(userSelection)
	{
	case '1':printf("1. Register Patient Details\n");
		break;
	case '2':printf("2. Display Ward Details\n");
		break;
	case '3':printf("3. View On-Call Contacts\n");
		break;
	case '4':printf("4. View Visitors Log\n");
		break;
	case '5':printf("5. Register a Staff Member\n");
		break;
	case '6':printf("6. Exit\n");
		break;
	//default:printf("\nInvalid Entry");
	         //break;	
    } // end of switch	
	
	}
	while(userSelection<6);
    
	
	getch();
    return(0);	
}
