/* function example */

/* Joe O'Regan */
/* 14-10-2015 */

#include<stdio.h>

int main()
{
    int num1,num2;
    
    
    printf("Enter number 1: ");
    scanf("%d",&num1);
    
    printf("Enter number 2: ");
    scanf("%d",&num2);
    
    // function calls
    add(num1,num2); 
    subtract(num1,num2);
    multiply(num1,num2);
    divide();
    modulus(num1,num2);
        
    getch();
    return(0);
 } // end of main
      
//function definitions (function declaration & body)  

// Function 1: Add 2 numbers
add(int num1,int num2) 
     {   
	 printf("\nThis is the add function\n");  
     int sum=num1+num2;
     printf("%d + %d = %d\n", num1,num2,sum);
     }

// Function 2: Subtract number 2 from number 1
subtract(int num1,int num2)
     {
     printf("\nThis is the subtract function\n");
     int sub=num1-num2;
     
     printf("%d - %d = %d\n", num1,num2,sub);
     }

// Function 3: Multiply Num1 & Num 2
multiply(num1,num2)
     {
     printf("\nThis is the multiply function\n");
     int mult=num1*num2;
     printf("%d * %d = %d\n",num1,num2,mult);
 	 }
 
// Function 4: Divide Num1 by Num2
divide(num1,num2)
     {
	 float x=num1,y=num2;
		
     printf("\nThis is the divide function\n");
     float div=x/y;
     printf("%.0f / %.0f = %f\n",x,y,div);
     }

// Modulus
modulus(num1,num2)
	{
		
		printf("\nThis is the modulus function\n");
		int mod=num1%num2;
		printf("%d mod %d = %d\n",num1,num2,mod);
	}
