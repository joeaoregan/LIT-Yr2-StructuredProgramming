/*	Practical: File Input and Output
	Ex1
	Joe O'Regan
	20-11-2015  */
	
#include <stdio.h>
 
main()
{
      char initial='C';
      FILE *fp;
      
      fp=fopen("single.txt","w");
      fputc(initial,fp);
      fclose(fp);
      
      getch();
}
     
