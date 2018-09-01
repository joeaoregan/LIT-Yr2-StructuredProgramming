#include<stdio.h>
int main()
{
 int i=0;
 int num=0;
 int sum=0;
 
 for(i=0;i<20;i++)
 {
  	printf("Please enter a number");
  	scanf("%d",&num);
  	sum=sum+num;
    if(num==0)
  	{
	 break;
	}		
 } 	  		
 
 printf("The sum of numbers is %d",sum);
  
 
 getch(); 
 return(0);
}
