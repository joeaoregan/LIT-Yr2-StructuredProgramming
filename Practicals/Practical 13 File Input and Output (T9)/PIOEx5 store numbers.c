/*	Practical: File Input and Output
	Ex5
	Joe O'Regan
	26-11-2015  */
	
#include <stdio.h>

main()
{ 
   int i;
   
   FILE *fp;
   fp = fopen("numbers.txt","w");
 
   for(i=1;i<=10;i++)
   {
   fprintf(fp,"%d\t",i);
	}
	
   fclose(fp);
}
