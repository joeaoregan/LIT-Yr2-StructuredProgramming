#include <stdio.h>

main()
{
 
	   float salary=0;
	   
	   printf("Please enter your salary\n:");
  	   scanf("%f",&salary);
  	   
  	   if(salary>=100000)
  	   {
          printf("Your Tax is 42%:");
  	                     
       }
       else if ((salary < 100000)&&(salary >= 20000))
       {
          printf("Your Tax is 20%:");
  	           
       }
       else if(salary < 20000)
       {
          printf("Your Tax is 42%:");               
       }              
    
	 			
     getch();
     return(0);
}	 	
     
