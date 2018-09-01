#include <stdio.h>

printDay(); // function prototype - let's the program know there is another function

main()
{
      char weekDay;
      printf("select day of week");
      printf("\nOption 1. Monday");
      printf("\nOption 2. Tuesday");
      printf("\nOption 3. Wedsday");
      printf("\nOption 4. Thursday");
      printf("\nOption 5. Friday");
      printf("\nOption 6. Saturday");
      printf("\nOption 7. Sunday");
      
 
 int i;
 
 do
{
  printf("\nPlease select an option: ");
  scanf(" %c",&weekDay);
      
 switch(weekDay)
    {
	case '1':printDay();
             break;		   
	case '2':printf("\nToday is Tuesday");
             break;
	case '3':printf("\nToday is Wednesday");
	         break;
	case '4':printf("\nToday is Thursday");
	         break;
	case '5':printf("\nToday is Friday");
	         break;
	case '6':printf("\nToday is Saturday");
	         break;
	case '7':printf("\nToday is Sunday");
	         break;
	default :printf("\nInvalid Entry");
    }	// end of switch
    i++;
} 

while(i<3);
    
    getch();
    return(0);
}

printDay() // goes after main function
{
 printf("Today is Monday\n");
} // returns to next line after function call
