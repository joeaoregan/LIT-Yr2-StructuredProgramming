#include<stdio.h>

int main()
{
   char magicletter = 'A';
   char letterGuess; 
   
   printf("Please Guess a Magic letter");
   scanf("%c",&letterGuess);               
   
   if(letterGuess == magicletter)
   {
     printf("You Win");
   }
   else
   {
     printf("You Loose Hard Luck");
   }
    
   getch();
   return(0);
}    
