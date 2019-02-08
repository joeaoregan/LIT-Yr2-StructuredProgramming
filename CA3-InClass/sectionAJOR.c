/* section AJOR */

/* Joe O'Regan */
/* 21-10-2015 */

#include<stdio.h>
main()
{
	int i,j,swapTemp,size=3;
	int arrNumbers[]={13,17,8};
	
	// output the original order of numbers
	printf("The numbers are:\n");
    for (i = 0; i < size; ++i)
        printf("Number %d = %d \n", i+1,arrNumbers[i]);
	
	
	// Swap The stored integers
	for (i = 0; i < size; ++i)
    {
        for (j = i + 1; j < size; ++j)
        {
            if (arrNumbers[i] > arrNumbers[j])
            {
                swapTemp =  arrNumbers[i];
                arrNumbers[i] = arrNumbers[j];
                arrNumbers[j] = swapTemp;
            }
        } // end of i for
    } // end of j for
    
    // print the swapped numbers
    printf("\nThe numbers swapped are:\n");
    for (i = 0; i < size; ++i)
    {
        printf("Number %d = %d \n", i+1,arrNumbers[i]);
    } // end of print for
	        
      getch();
      return(0);
      }
      
