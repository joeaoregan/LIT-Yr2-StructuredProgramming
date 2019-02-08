#include<stdio.h>
#define MAXSIZE 10

int main()
{
  
 int arrCustNums[10] = {313,453,502,101,892,475,792,912,343,633};
 float arrCustBals[10]={0,45.43,71.23,301.56,9.08,192.41,389,229.67,18.31,59.54};
 
 int i,j,temp1,temp2;

 //Array access using a loop 
 for(i=0;i<10;i++)
 {
   printf("\n\nThe Customer Number: %d \t Customer Balance %.2f",arrCustNums[i],arrCustBals[i]);               
                  
 }
 
 /*   Bubble sorting begins */
 for (i = 0; i < MAXSIZE; i++)
 {
    for (j = 0; j < (MAXSIZE - i - 1); j++)
    {
       if (arrCustNums[j] > arrCustNums[j + 1])
       {
           temp1 = arrCustNums[j];
           temp2 = arrCustBals[j];
           arrCustNums[j] = arrCustNums[j + 1];
           arrCustBals[j] = arrCustBals[j + 1];
           arrCustNums[j + 1] = temp1;
           arrCustBals[j + 1] = temp2;
        }
     }
   }
 printf("\nSorted array is...\n");
 for (i = 0; i < MAXSIZE; i++)
 {
    printf("%d\t", arrCustNums[i]);
    printf("%.2f\n",arrCustBals[i]);
    
 }
 
    
 getch();
 return(0);   
}
