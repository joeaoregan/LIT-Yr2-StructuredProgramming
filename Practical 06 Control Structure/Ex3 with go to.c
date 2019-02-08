/* Exercise 3: Enter 20 values & exit on zero (with go to)*/

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
     
     if (number <= 0)
     {
     goto zerocheck; // not working
     }
        
     totalNumbers += number; // add number to total
     i++; // increment counter
    }
    while(i<3);
    
    average = totalNumbers / i; // calculate average
    printf("the average of the %d numbers entered is: %f",i,average);             
    
    zerocheck: // label
    {                  
    printf("You have entered a Zero value\n");
    }
       
    getch();
    return(0);
    
 } // end of main
      
