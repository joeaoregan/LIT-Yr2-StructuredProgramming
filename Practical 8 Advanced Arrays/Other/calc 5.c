/* function example */

/* Joe O'Regan */
/* 14-10-2015 */

#include<stdio.h>

int main()
{
    int num1=0;
    int num2=0;
    int num3=0;
    
    printf("\nPlease Enter Number 1: ");
    scanf("%d",&num1);
    printf("\nPlease Enter Number 2: ");
    scanf("%d",&num2);
    printf("\nPlease Enter Number 3: ");
    scanf("%d",&num3);
     
    // function calls
    add(num1,num2,num3); 
    
    printf("\nThe value of num1 is %d",num1);
    printf("\nThe value of num2 is %d",num2);
    printf("\nThe value of num3 is %d",num3);
    
        
    getch();
    return(0);
 } // end of main
      
//function definitions (function declaration & body)  
add(int x, int y, int z) 
     {
              
     int sum=x+y+z;
     printf("The Result Is %d\n",sum);
     
     x=x+2;
     y=y+2;
     z=z+2;
     
     
    printf("\nThe value of x is %d",x);
    printf("\nThe value of y is %d",y);
    printf("\nThe value of z is %d",z);
     }
