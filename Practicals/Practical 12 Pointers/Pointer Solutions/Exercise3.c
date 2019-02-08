#include<stdio.h>
#define SIZE 10

int main()
{
 int arrInt[3]={2,4,6};
 char arrChar[3]={'A','B','C'};
 double arrDouble[3]={1224.35,3333.44,46346.46};
 
 printf("\nsizeof in array:%d",sizeof(arrInt));   
 printf("\nsizeof in array:%d",sizeof(arrChar));   
 printf("\nsizeof in array:%d",sizeof(arrDouble));   
 
 
 getch();
 return(0);
}
