/*Hospital Reception System*/
#include<stdio.h>

int main()
{
    int num=0;
    int i=0;
    int sum=0;
 do
 {
        i++;
        printf("please enter a number");
        scanf("%d",&num);
        sum=sum+num;
        
             
 }while(num != 0);
 
 printf("The sum of %d numbers entered is %d",i,sum);
 getch();
 return(0);
 
   
}
