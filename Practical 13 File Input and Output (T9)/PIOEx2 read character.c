/*	Practical: File Input and Output
	Ex2
	Joe O'Regan
	20-11-2015  */
	
#include <stdio.h>
#include <string.h>
 
main()
{
      char initial='C'; // declare initial
      int i;
      
      FILE *fp;
      
      // specify name of file, and the operaton being performed
      fp=fopen("single.txt","r");     // r - open file "single.txt" for reading (read a file)
      
      if(fp==NULL)
      {
       printf("\nERROR - Cannot Open designated file");
      }
      else
      {
    	initial=fgetc(fp);		// retrieve from file   
 		initial=tolower(initial);

    	printf(" %c",initial);	// ouputs space, and the character "C" already stored in file
      }
      fclose(fp);
      
      getch();
}
     
