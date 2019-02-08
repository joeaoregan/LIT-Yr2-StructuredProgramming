/* Practical 9: Variable Scope and Functions
	program to take in a value and ouput the factorial of that value
   Exercise 21 */

/* Joe O'Regan */
/* 26-10-2015 */

#include <stdio.h>

void factFunct(int num);

int main()
{
 	int fact;
 	
 	printf("Enter a Number:");
 	scanf("%d",&fact);
 	
	factFunct(fact);
	
	getch();
	return(0);
} 	

void factFunct(int num)
{
	int i,total=num;	
	
	for(i=num-1;i>1;--i)
	{
		total=total*i;
	}
	printf("%d",total);
	//if(num<0) { return;}		
	//else{ factFunct(num);}	   		 
}

