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
        if(num>=0)
        {
           sum=sum+num;
        }
             
 }while(num != 0);
 
 printf("The sum of positive numbers entered is %d",sum);
 getch();
 return(0);
 
   
}
