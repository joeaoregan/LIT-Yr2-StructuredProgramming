/* Slide 21: Example of Recursion */

/* Joe O'Regan */
/* 23-10-2015 */

#include <stdio.h>

void count_down_from(int num);
int main(){
 	int start;
 	
 	printf("Enter a positive integer to count down from:");
 	scanf("%d",&start);
 	
	count_down_from(start);
	printf("Lift Off!\n");
	
	getch();
	return(0);
} 	
void count_down_from(int num)
{
 printf ("%d\n",num);
 --num;
 
 if(num<0) { return;}		
 else{ count_down_from(num);}	   		 
}

