/*	Practical: File Input and Output
	Ex4
	Joe O'Regan
	20-11-2015  */
	
#include <stdio.h>
#include <string.h>
 
main()
{
      char characterA='x'; // declare initial value of characterA
	  char characterB='y';
	  char characterC='z';
      int i;
      
      FILE *fp;
      
      // specify name of file, and the operaton being performed
      fp=fopen("character.txt","r");     // r - open file "character.txt" for reading (read a file)
      
      if(fp==NULL)
      {
       printf("\nERROR - Cannot Open designated file");
      }
      else
      {
       characterA=fgetc(fp);			// retrieve from file       
 	   characterA=tolower(characterA);	// convert to lower case
 	   
 	   characterB=fgetc(fp);      
 	   characterB=tolower(characterB);
 	   
 	   characterC=fgetc(fp);      
 	   characterC=tolower(characterC); 	    	   

       printf(" %c %c %c",characterA,characterB,characterC);	// ouputs space, and the character "C" already stored in file
      }
      fclose(fp);
      
      getch();
}
     
