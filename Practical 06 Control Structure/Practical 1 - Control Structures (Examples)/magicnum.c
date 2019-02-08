#include<stdio.h>

int main()
{
   int magicNumber = 7;
   int numGuess=0; 
   
   printf("Please Guess a Magic Number");
   scanf("%d",&numGuess);               
   
   if(numGuess == magicNumber )
   {
     printf("You Win");
   }
    
   getch();
   return(0);
}    
