/* Practical 9 Ex2 - area */

/* Joe O'Regan */
/* 15-10-2015 */

#include<stdio.h>

int base=20,height=10;

main()
{
    int area;
    
    printf("Base: %d ",base); // output base dimension
    printf("Height: %d ",height); // output height dimension
    
    area=base*height/2; // calculate area of triangle (base x height)/2
    printf("Area: %d ",area); // output area without decimal place
    
        
    getch();
    return(0);
 } // end of main
