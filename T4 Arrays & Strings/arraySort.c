#include <stdio.h>
main()
{
	int arrNums[]={1,7,9,3,5,8};
	int temp;
	int i,j;
	
	for(i=0;i<6;i++)
	{
		for (j = 0; j < (6 - i - 1); j++)
		{	
		if (arrNums[j] > arrNums[j + 1])
       	 {
           temp = arrNums[j];
           arrNums[j] = arrNums[j + 1];
           arrNums[j + 1] = temp;
         }
		}
		//printf("%d\n",arrNums[j]);	// descending
		printf("%d\n",arrNums[i]);		// ascending
	}
} // main


