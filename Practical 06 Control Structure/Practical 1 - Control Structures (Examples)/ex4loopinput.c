#include<stdio.h>

int main()
{
   int num_in=0;
   int sum=0; 
   int i=0;
   //while
   while(i<8)
   {
    printf("Please enter a number\n");
    scanf("%d",&num_in);
    sum = sum + num_in;
    i++;
   }
   
   printf("The Sum of numbers = :%d\n",sum);
               
    
   getch();
   return(0);
}    
