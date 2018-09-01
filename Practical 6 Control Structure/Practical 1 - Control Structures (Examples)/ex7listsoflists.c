#include<stdio.h>

int main()
{
   int num_of_lists=0;
   int num_of_items = 0;
   int num_in=0;
   int i=0;
   int j=0;
   int sum=0;
   float average;
   
   printf("Please enter the number of lists you wish to evaluate\n");
   scanf("%d",&num_of_lists);
   
   printf("How many list items do you wish to evaluate for each list\n");
   scanf("%d",&num_of_items);
   
  
   for(i=0;i<num_of_items;i++)
   {
    printf("Please enter a number\n");
    scanf("%d",&num_in);
    sum= sum + num_in;
   }  
  
   average = sum/num_of_items;
   printf("The Average Number for list %d is = :%f\n",i,average);
 
              
   getch();
   return(0);
}    
