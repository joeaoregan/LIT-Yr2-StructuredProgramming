#include <stdio.h>
 
main()
{
      char initial='1';
      
      FILE *fp;
      
       fp=fopen("ex1.txt","w"); // open file ex1.txt for writing ("w")
              
       fputc(initial,fp);
       
      fclose(fp);
      getch();
}
     
