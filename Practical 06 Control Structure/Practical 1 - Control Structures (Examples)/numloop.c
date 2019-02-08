#include<stdio.h>

int main()
{
   int i=0;
   
   //while
   printf("Printing numbers using a while loop\n");
   while(i<=10)
   {
   printf("The Number is %d\n",i);
   i++;
   }

   i=0;
   //do while
   printf("Printing numbers using a do while loop\n");
   do
   {
   printf("The Number is %d\n",i);
   i++;
   }while(i<=10);
   
   //for
   printf("Printing numbers using a for loop\n");
   i=0;
   for(i=0;i<=10;i++)
   {
   printf("The Number is %d\n",i);
   }
                     
    
   getch();
   return(0);
}    
