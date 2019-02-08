#include<stdio.h>
#define MAXSIZE 6
 
int main()
{
  
 int arrNums[MAXSIZE] = {1,7,9,3,5,8};
 int i, j, num, temp;

 //Array access using a loop 
 for(i=0;i<MAXSIZE;i++)
 {
   printf("%d",arrNums[i]);               
                  
 }
 /*   Bubble sorting begins */
 for (i = 0; i < MAXSIZE; i++)
 {
    for (j = 0; j < (MAXSIZE - i - 1); j++)
    {
       if (arrNums[j] > arrNums[j + 1])
       {
           temp = arrNums[j];
           arrNums[j] = arrNums[j + 1];
           arrNums[j + 1] = temp;
        }
     }
   }
 printf("\nSorted array is...\n");
 for (i = 0; i < MAXSIZE; i++)
 {
    printf("%d\n", arrNums[i]);
 }
   
 getch();
 return(0);   
}
