/* Program to Demonstrate the Use of a Switch Statement*/

#include <stdio.h>
main()
{
	// can be int or char, do not use double or float
 	char x;
 	
 	do{
	 
 	printf("enter selsection: ");
 	scanf(" %c",&x);
 	
	 do{
	 
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
    } //end of switch
} //end of nested do
	while(x<=3);	
} while(x<=3);
    
    getch();
    return(0);	
}
