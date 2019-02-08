/*	Practical: File Input and Output
	Ex3
	Joe O'Regan
	20-11-2015  */
	
#include <stdio.h>
 
main()
{
      char characterA='A';
      char characterB='B';
      char characterC='C';
      
      FILE *fp;
      
      fp=fopen("character.txt","w");
      fputc(characterA,fp);
      fputc(characterB,fp);
      fputc(characterC,fp);
      
      fclose(fp); 					// close
      
      getch();
}
     
