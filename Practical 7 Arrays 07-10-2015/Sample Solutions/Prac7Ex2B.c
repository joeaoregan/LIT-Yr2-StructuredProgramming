#include<stdio.h>

int main()
{
  
 int arrCustNums[10] = {313,453,502,101,892,475,792,912,343,633};
 float arrCustBals[10]={0,45.43,71.23,301.56,9.08,192.41,389,229.67,18.31,59.54};
 
 int customerNumSearch=0;
  int i=0;

 //Array access using a loop 
 for(i=0;i<10;i++)
 {
   printf("\n\nThe Customer Number: %d \t Customer Balance %.2f",arrCustNums[i],arrCustBals[i]);               
                  
 }
    
 //Check for Number
 
 printf("\nPlease Enter your Customer Number");
 scanf("%d",&customerNumSearch);
 
 for(i=0;i<10;i++)
 {
    if( customerNumSearch== arrCustNums[i])
    {
     printf("\n\nThe Customer Number: %d is found\t Customer Balance %.2f",arrCustNums[i],arrCustBals[i]);               
    }             
 }  
    
 getch();
 return(0);   
}
