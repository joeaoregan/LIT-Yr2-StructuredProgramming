/* Exercise 3: Enter 20 values & exit on zero (no break)*/

/* Joe O'Regan */
/* 09-10-2015 */

#include<stdio.h>
int main()
{
    int i=0;
    float average=0,totalNumbers=0;
    int number;
    
    
    do
    {
     printf("Please Enter Number %d: ",i+1); //enter number
     scanf("%d",&number);
    
     totalNumbers += number; // add number to total
     i++; // increment counter
    }
    while((i<3) && (number |= 0));
    
    
    average = totalNumbers / i; // calculate average
    
    printf("the average of the %d numbers entered is: %f",i,average);             
       
    getch();
    return(0);
    
 } // end of main
      
