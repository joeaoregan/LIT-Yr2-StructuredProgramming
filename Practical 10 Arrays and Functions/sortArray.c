#include<stdio.h>
main()
{
	int i,j,temp;
	int arrA[3]={1,3,4};	
	int arrB[3];
	
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			if(arrA[i]>arrA[j])
			{
	 		 temp=arrA[i];	
	 		 arrA[i]=arrA[j];
	 		 arrA[j]=temp;
	 		}
		}
	}
	
	printf("Values High To Low Are: \n");
	for(i=0;i<3;++i)
	{
		printf("\n%d",arrA[i]);
	}
	
	getch();
	return(0);
}
