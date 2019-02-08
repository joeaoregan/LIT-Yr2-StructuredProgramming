#include<stdio.h>

int main()
{
  
 float arrNumbers[10]={0,45.43,71.23,301.56,9.08,192.41,389,229.67,18.31,59.54};
  int i=0;
 //Array access using a loop 
 for(i=0;i<10;i++)
 {
   printf("\nThe value in position %d is %.2f",i,arrNumbers[i]);               
                  
 }
    
    
 getch();
 return(0);   
}
