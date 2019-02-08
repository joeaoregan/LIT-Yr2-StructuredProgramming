#include <stdio.h>
 
main()
{
      char initial='C'; // declare initial
            FILE *fp;
      
      // specify name of file, and the operaton being performed
      fp=fopen("ex1.txt","r");     // r - open file "ex1.txt" for reading (read a file)
      
      if(fp==NULL)
      {
       printf("\nERROR - Cannot Open designated file");
      }
      else
      {
       initial=fgetc(fp);       // retrieve from file
       printf(" %c",initial); // ouputs space, and the character "W" already stored in file
      }
      fclose(fp);
      
      getch();
}
     
