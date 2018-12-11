/*	Practical: File Input and Output
	Ex10
	Joe O'Regan
	27-11-2015  */
	
#include <stdio.h>

main()
{ 
   int i;
   char name[10];
   
   FILE *fp;
   fp = fopen("names.txt","r");
 
   for(i=0;i<4;i++)
   {
   fgets(name,10,fp);
   printf("%s",name);
	}
	
   fclose(fp);
   
   getch();
   return(0);
}
