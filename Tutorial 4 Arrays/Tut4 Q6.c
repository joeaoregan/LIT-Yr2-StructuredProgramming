#include <stdio.h>

int main()
{
    int nums[]={50,32,93,2,74};
    int temp=0;
    int inner=0;
    int outer=0;
    int i=0;
    printf("Original List\n");
    for(i=0;i<5;i++){
        printf("%d\t",nums[i]);
    }
    printf("\n");
    for(outer=0;outer<4;outer++)
    {    
       printf("Outer=:%d------------\n",outer);
       for(inner=outer;inner<5;inner++)
       {
         printf("inner=:%d------------\n",inner);
         printf("outer:%d------------\n",outer);
        if(nums[inner]<nums[outer])
        {
           temp=nums[inner];
           nums[inner] = nums[outer];
           nums[outer] = temp;
        }
        printf("Pass:%d------------\n",outer);
        i=0;
        for(i=0;i<5;i++)
        {
         printf("%d\t",nums[i]);
        }
        printf("\n");
       }                         
    }
    
    getch();
    return(0);
}
