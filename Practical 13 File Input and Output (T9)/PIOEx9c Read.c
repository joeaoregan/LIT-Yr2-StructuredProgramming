/*	Practical: File Input and Output
	Ex9
	Joe O'Regan
	26-11-2015  */
	
#include <stdio.h>

main()
{ 
   int i;
   int num;
   
   FILE *fp;
   fp = fopen("barcodes.dat","r");
 
   for(i=0;i<6;i++)
   {
   fscanf(fp,"%d",&num);
   printf("%d\n",num);
	}
	
   fclose(fp);
   
   getch();
   return(0);
}
