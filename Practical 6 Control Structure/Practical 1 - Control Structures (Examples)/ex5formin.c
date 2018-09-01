#include<stdio.h>

int main()
{
   int num_in=0;
   int min=0; 
   int i=0;
   //while
   
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
               
    
   getch();
   return(0);
}    
