/* swap function */

/* Joe O'Regan */
/* 22-10-2015 */

#include<stdio.h>

int main()
{
    int num1,num2;
    
    printf("Enter number 1: ");
    scanf("%d",&num1);
    
    printf("Enter number 2: ");
    scanf("%d",&num2);
     
    // function calls
    swap(num1,num2); 
    
        
    getch();
    return(0);
 } // end of main
      
//function definitions (function declaration & body)  
// x and y take a copy of num1 and num2
swap(int x, int y) 
{
     // use temp file to swap values         
     int temp = x;
     x=y;
     y=temp;
     
     // control string followed by x and y
     printf("Swapped: Number 1: %d Number 2: %d", x,y);
}
