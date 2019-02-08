/* area */

/* Joe O'Regan */
/* 15-10-2015 */

#include<stdio.h>



main()
{
    int base,height,area;
    
    printf("Base: %d",base); // input base dimension
    scanf("%d",base);
    printf("Height: %d",height); // input height dimension
    scanf("%d",height);
    area=base*height/2; // calculate area of triangle (base x height)/2
    printf("Area: %d",area); // output area without decimal place
    
        
    getch();
    return(0);
 } // end of main
