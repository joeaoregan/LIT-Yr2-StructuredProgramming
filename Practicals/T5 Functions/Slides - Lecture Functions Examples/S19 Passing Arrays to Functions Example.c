/* Slide 19: Example - Passing Arrays to Functions */
/* with print statement to display */

/* Joe O'Regan */
/* 23-10-2015 */

#include<stdio.h>

#define SIZE 4

void increaseNum(int a[]);

main()
{
        int i,nums[SIZE] = {2,4,6,8};      
		increaseNum(nums);
		
		for(i=0;i<4;++i)
        {
		 printf("%d ",nums[i]);
    	}
		getch();
		return(0);
}

void increaseNum(int a[])
{
  int i=0;
  for(i=0;i<SIZE;++i)
  {
    a[i] = a[i]+1;                           
  }
}

