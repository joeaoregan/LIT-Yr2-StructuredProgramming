/* Practical: Variable Scope and Functions
   Exercise 17 */

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

float triangle(float base, float height)  // function definition - triangle
{
    float area;
    area = base * height / 2;
    
    return(area);
}

main() // main is a function
{
    int area;
    // function calls
    printf("Triangle #1 %f",triangle(10,40));
    printf("\nTriangle #2 %f",triangle(20,40));
    printf("\nTriangle #3 %f",triangle(40,40));
    
    getch();
    return(0);
 } // end of main
 
