/* realloc() */

/* Joe O'Regan */
/* 10-12-2015*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int *buffer;
	
	/*get an initial memory block*/
	buffer = (int*)malloc(10*sizeof(int));
	if(buffer==NULL)
	{
		printf("Error allocating memory!");
		exit(1);
	}
	
	/*get more memory with realloc*/
	buffer = (int*)realloc(buffer,20*sizeof(int));
	if(buffer==NULL)
	{
		printf("Error reallocating memory!");
		//Free the intital memory block.
		free(buffer);
		exit(1);
	}
	free(buffer);
	
	getch();
    return(0);
}
      
