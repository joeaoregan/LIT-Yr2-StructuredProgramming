/* Exercise 8: Sample -- simple interest

/* Joe O'Regan */
/* 08-10-2015 */

#include<stdio.h>
int main()
{
    float lump_sum = 50000.00;
    int num_of_years = 4;
    float int_rate=2.5;
    float int_earned = 0;
    float total_int_earned = 0;
    int i=0;
     
    for(i=0;i<num_of_years;i++) // simple interest
     {
     int_earned = (lump_sum/100)*int_rate;
     printf("The Interest earned this year is:%.2f\n",int_earned);
     total_int_earned = total_int_earned + int_earned;
     }
      
    printf("The Total Interest earned after %d years is : %.2f\n",num_of_years,total_int_earned);
           
getch();
return(0);
}
      
