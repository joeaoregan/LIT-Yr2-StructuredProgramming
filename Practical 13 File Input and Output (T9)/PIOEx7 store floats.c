/*	Practical: File Input and Output
	Ex7
	Joe O'Regan
	26-11-2015  */
	
#include <stdio.h>

main()
{ 
   int i;
   float arrPrice[]={1.99,2.99,3.99,4.99,5.99,6.99};
   
   FILE *fp;
   fp = fopen("salesitems.txt","w");
 
   for(i=0;i<6;i++)
   {
   fprintf(fp,"%f\t",arrPrice[i]);
	}
	
   fclose(fp);
}
