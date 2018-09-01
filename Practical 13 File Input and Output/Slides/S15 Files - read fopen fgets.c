#include <stdio.h>
 
main()
{
  
   char buff[10];
   
   FILE *fp;
 
   fp = fopen("stringnames.txt","r");
   fgets(buff,10,fp);
   printf("%s",buff);                
          
   fclose(fp);
   getch();
   return(0);
 }
