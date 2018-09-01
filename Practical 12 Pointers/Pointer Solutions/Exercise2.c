#include<stdio.h>
#define SIZE 10

int main()
{
 
 int x=50;
 int y=60;
 int *px=&x;
 int *py=&y;
 
 if(px>py)
 {
          
 printf("\nThe address of px is: %u,The address of py is: %u",&px,&py);
 printf("\nThe address of px is: %X,The address of py is: %X",&px,&py);
 
 }
          
 
 getch();
 return(0);
 
}
