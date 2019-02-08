/* Practical 7 Arrays 
   Ex4: Customer Number & Customer Balance */

/* Joe O'Regan */
/* 21-10-2015 */

#include<stdio.h>
main()
{
      int arrNum[]={1,7,9,3,5,8};
      int i,j,k,size=6,sort=0;
    
    for(i=0; i<size; ++i)
    {
        for (j = i + 1; j < size; ++j)
        {
            if (arrNum [i] > arrNum[j])
            {
                sort =  arrNum[i];
                arrNum[i] = arrNum[j];
                arrNum[j] = sort;
            }
        } // end of j for
    } // end of i for
    
    
    printf("Given the numbers 1, 7, 9, 3, 5, 8\n");
    
    // output the sorted array
    printf("The numbers arranged in ascending order are: \n");
    for (i = 0; i < size; ++i)
    {
        printf("%d ", arrNum[i]);
    } 
      
      getch();
      return(0);
}
      
