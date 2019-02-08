/* function */

/* Joe O'Regan */
/* 22-10-2015 */

#include<stdio.h>

void increaseNum(int a[]);

main()
{
    int j;  
    int nums[4] = {2,4,6,8};
    
    increaseNum(nums);
    
    // output values applied by function
    for(j=0;j<4;++j)
    {
    printf("%d ",nums[j]);
    }
    
    getch();
    return(0);
} // end of main
      

void increaseNum(int a[])
{
     int i=0;
     for(i=0;i<4;++i)
     {
      a[i]=a[i]+1;
     }
}
