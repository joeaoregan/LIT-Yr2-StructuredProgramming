/* Practical 6: Ex 5 */

/* Display a menu to a user of a Hospital reception system */
/* The Program should enable the user to select from a menu */

/* Joe O'Regan */
/* 21-10-2015 */

#include <stdio.h>
main()
{	
	int input;
	
	printf("Option 1. Register Patient Details\n");
 	printf("Option 2. Display Ward Details\n");
 	printf("Option 3. View On-Call Contacts\n");
 	printf("Option 4. View Visitors Log\n");
 	printf("Option 5. Register a Staff Member\n");
 	printf("Option 6. Exit\n");
 	
 	// while loop for while user input is any option except 6
 	while (input!=6)
 	{
	printf("\nPlease Enter Menu Option 1 To 6: ");
	scanf(" %d", &input);
	
	switch(input)
   {
    // put case option in '' for char and none for int         
	case 1:printf("\n1. Regiter Patient Details");
 	     break;		   
	case 2:printf("\n2. Display Ward Details");
         break;
	case 3:printf("\n3. View On-Call Contacts");
         break;
	case 4:printf("\n4. View Visitors Log");
         break;
	case 5:printf("\n5. Register a Staff Member");
         break;
	case 6:printf("\n6. Exit");
         break;
	default:printf("\nInvalid Entry");
	     break;	
    } // end of switch
} // end of while	
	
	getch();
	return(0);
	
} // end of main
