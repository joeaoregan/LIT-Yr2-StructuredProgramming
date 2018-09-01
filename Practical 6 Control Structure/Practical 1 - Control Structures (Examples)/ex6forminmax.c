#include<stdio.h>

int main()
{
   int num_in=0;
   int min=0; 
   int max=0; 
   int i=0;
   
   
   printf("Please enter a number\n");
   scanf("%d",&num_in);
   min = num_in; 
   
   for(i=0;i<7;i++)
   {
    printf("Please enter a number\n");
    scanf("%d",&num_in);
    if(num_in<min)
    {
      min = num_in;
    }  
    
   }
   printf("The min number entered is = :%d\n",min);
               
   printf("Please enter a number\n");
   scanf("%d",&num_in);
   max = num_in; 
   
   for(i=0;i<7;i++)
   {
    printf("Please enter a number\n");
    scanf("%d",&num_in);
    if(num_in>max)
    {
      max = num_in;
    }  
    
   }
   printf("The max number entered is = :%d\n",max);
   
    
   getch();
   return(0);
}    
