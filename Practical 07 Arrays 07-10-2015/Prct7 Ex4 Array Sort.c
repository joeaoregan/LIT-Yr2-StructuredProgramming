/* Practical 7 Arrays Ex4 */

/* Joe O'Regan */
/* 07-10-2015 */

#include<stdio.h>
main()
{
	int i,j,k,a,n=6;
	int arrRandom[]={1,7,9,3,5,8};
	
	for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (arrRandom[i] > arrRandom[j])
            {
                a =  arrRandom[i];
                arrRandom[i] = arrRandom[j];
                arrRandom[j] = a;
            }
        }
    }
    
    printf("Given the numbers 1, 7, 9, 3, 5, 8\n");
    printf("The numbers arranged in ascending order are: \n");
    for (i = 0; i < n; ++i)
        printf("%d ", arrRandom[i]);
        
    printf("\n\nThe numbers arranged in descending order are: \n");
	for (k=n-1;k>=0;k--) 
	    printf("%d ", arrRandom[k]);
	        
      getch();
      return(0);
      }
      
