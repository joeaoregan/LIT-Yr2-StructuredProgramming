/* function example */

/* Joe O'Regan */
/* 14-10-2015 */

#include<stdio.h>

int main()
{
    int num1,num2;
    
    printf("\nEnter number 1: ");
     scanf("%d",&num1);
     printf("\nEnter number 2: ");
     scanf("%d",&num2);
     
    // function calls
    add(num1,num2); 
    
        
    getch();
    return(0);
 } // end of main
      
//function definitions (function declaration & body)  
add(int num1, int num2) 
     {
              
     int sum=num1+num2;
     printf("%d + %d = %d\n", num1,num2,sum);
     }
