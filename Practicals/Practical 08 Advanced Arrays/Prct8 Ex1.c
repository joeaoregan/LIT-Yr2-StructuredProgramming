/* Practical 8: Advanced Arrays 
   Exercise 1 */

/* Joe O'Regan */
/* 19-10-2015 */

#include<stdio.h>
main()
{
    int a,b=0;
    int c[10] = {1,2,3,4,5,6,7,8,9,0};
    
    for (a=0;a<10;++a)
     if((c[a] % 2) == 0) b+=c[a]; // adds every 2nd number in the array
     printf("%d",b);
    
    getch();
    return(0);
 } // end of main
      
