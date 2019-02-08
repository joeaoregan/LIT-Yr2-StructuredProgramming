/* Practical 6 - Control Flow 2 */
/* Program to take in both positive and negative numbers, counting all postitives and ignoring negatives */

/* Joe O'Regan */
/* 10-10-2015 */

#include<stdio.h>

int main()
{
   int num_in=0;
   int sum=0; 
   int i=0;
   //while
   while(i<3)
   {
    printf("Please enter a number\n");
    scanf("%d",&num_in);
    
    if (num_in>0)
    {
	sum = sum + num_in;
	}
	
	i++;
   }
   
   printf("The Sum of numbers is: %d\n",sum);
               
    
   getch();
   return(0);
}    
