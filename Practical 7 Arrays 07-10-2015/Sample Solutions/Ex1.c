#include<stdio.h>

int main()
{
  
 int arrNumbers[10];
 int i=0;

 arrNumbers[0]=313;
 arrNumbers[1]=453;
 arrNumbers[2]=502;
 arrNumbers[3]=101;
 arrNumbers[4]=892;
 arrNumbers[5]=475;
 arrNumbers[6]=792;
 arrNumbers[7]=912;
 arrNumbers[8]=343;
 arrNumbers[9]=633;
 
 
 printf("\nThe value in position %d is %d",i,arrNumbers[0]);               
 printf("\nThe value in position %d is %d",i,arrNumbers[1]);               
 printf("\nThe value in position %d is %d",i,arrNumbers[2]);               
 printf("\nThe value in position %d is %d",i,arrNumbers[3]);               
 printf("\nThe value in position %d is %d",i,arrNumbers[4]);               
 printf("\nThe value in position %d is %d",i,arrNumbers[5]);               
 printf("\nThe value in position %d is %d",i,arrNumbers[6]);               
 printf("\nThe value in position %d is %d",i,arrNumbers[7]);               
 printf("\nThe value in position %d is %d",i,arrNumbers[8]);               
 printf("\nThe value in position %d is %d",i,arrNumbers[9]);               
 
 //Array access using a loop 
 for(i=0;i<10;i++)
 {
   printf("\nThe value in position %d is %d",i,arrNumbers[i]);               
                  
 }
    
    
 getch();
 return(0);   
}
