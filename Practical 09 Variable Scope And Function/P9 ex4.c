/* Practical 9: Variable Scope and Functions
   Exercise 4 */

/* Joe O'Regan */
/* 15-10-2015 */

#include<stdio.h>
/*************************************************
*Name of Function: Triangle                      *
*Description: Computes the area of a triangle    *
*Parameters:                                     *
*            base -- Base of the Triangle        *
*            height -- Height of the Triangle    *
*                                                *
*Returns:                                        *
*            area of a triangle                  *
**************************************************/

int triangle(int base,int height)  // function definition - triangle
{
    int area;
    area = base * height / 2;
    return(area);
}

main() // main is a function
{
    int area;
    // function calls
    printf("Triangle #1 %d",triangle(10,40)); 
    printf("\nTriangle #2 %d",triangle(20,40));
    printf("\nTriangle #3 %d",triangle(40,40));
    
    getch();
    return(0);
 } // end of main
