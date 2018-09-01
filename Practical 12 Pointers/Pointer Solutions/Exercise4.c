#include<stdio.h>
#define SIZE 10

int main()
{
 int x[10]={2,4,6,8,10,12,14,16,18};
 int i=0;
 
 printf("\nArray Print out using indexing");   
 
 for(i=0;i<SIZE;i++)
 { 
  printf("\nThe value held in position %i is:%d",i,x[i]);   
 }
 

 printf("\nArray Print out using pointers");   
 
 for(i=0;i<SIZE;i++)
 { 
  printf("\nThe value held in position %i is:%d",i,*(x+i));   
 }
 
 getch();
 return(0);
}
