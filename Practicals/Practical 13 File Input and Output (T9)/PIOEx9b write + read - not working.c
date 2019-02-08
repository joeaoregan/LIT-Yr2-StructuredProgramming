/*	Practical: File Input and Output
	Ex9
	Joe O'Regan
	26-11-2015  */
	
#include <stdio.h>

main()
{ 
   int i,num;
   int itemCode[]={12345,23456,34567,45678,56789,67890};
   
   FILE *fp;
   
   fp = fopen("barcodes.txt","w+");
 
   for(i=0;i<6;i++)
   {
   fprintf(fp,"%d\t",itemCode[i]);
   }
 
   for(i=0;i<6;i++)
   {
   fscanf(fp,"%d",&num);
   printf("%d\n",num);
	}
	
   fclose(fp);
   
   getch();
   return(0);
}
