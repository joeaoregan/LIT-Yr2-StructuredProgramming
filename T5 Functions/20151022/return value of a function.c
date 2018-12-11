/* return square function */

/* Joe O'Regan */
/* 22-10-2015 */

#include<stdio.h>

int funct(int);

int main()
{
    int a = 5;
    int ans;
    printf("This is the main function\n");
    
    ans=funct(a);
    printf("the value returned from the function is: %d\n",ans);
        
    getch();
    return(0);
} // end of main
      

int funct(int x) 
{
     // use temp file to swap values         
     
     
     
     printf("This function squares the value: %d ", x);
     x = x * x;
     return x;
}
