/* power of function */

/* Joe O'Regan */
/* 23-10-2015 */

#include<stdio.h>

int main()
{
    int num,powerOf;
    
    printf("Enter Number: ");
    scanf("%d",&num);
    
    printf("Enter Power Of: ");
    scanf("%d",&powerOf);
     
    // function calls
    power(num,powerOf); 
    
        
    getch();
    return(0);
 } // end of main
      
// Function: x to the power of y
power(int x, int y) 
{        
     int i,z = x;
     
     for(i=1;i<y;++i)
     {
     	z=z*x;
     	//printf("\nz=%d,x=%d",z,x); // test
	 }
     
	 printf("\n%d to the power of %d is: %d",x,y,z);
}
