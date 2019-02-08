/* Program to Demonstrate the Use of a Switch Statement*/

#include <stdio.h>
main()
{
	// can be int or char, do not use double or float
 	char x=3;
 	 	
    switch(x)
   {
	case '1':printf("Today is Monday");
 	 break;		   
	case '2':printf("\nToday is Tuesday");
                break;
	case '3':printf("\nToday is Wednesday");
	         break;
	default:printf("\nInvalid Entry");
	         break;	
    }	
    getch();
    return(0);	
}
