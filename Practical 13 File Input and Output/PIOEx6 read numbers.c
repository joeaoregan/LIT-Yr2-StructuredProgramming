/*	Practical: File Input and Output
	Ex6
	Joe O'Regan
	26-11-2015  */
	
#include <stdio.h>

main()
{ 
	int i,num,squared;
   
	FILE *fp;
	fp = fopen("numbers.txt","r");
   
	for(i=1;i<=10;i++)
	{
   	fscanf(fp," %d",&num);
   	squared=num*num;
	printf("%d squared is %d\n",num,squared);
	}

   fclose(fp);
   getch();
}
