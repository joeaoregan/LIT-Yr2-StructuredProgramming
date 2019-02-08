/*Program to demonstrate the use of a break in a for loop*/
#include<stdio.h>

main()
{
 int i=0;
 for(i=0;i<10;i++)
 {
  	printf("%d\n",i);
  	if(i==4)
  	{
	 break;
	}		
 } 	  		
 getch();
 return(0);	
}
