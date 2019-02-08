#include <stdio.h>

main()
{ 
   char input[] = "";
   
   FILE *fp;
 
   fp = fopen("stringnames2.txt","w");
   printf("Please Enter a Name: ");
   scanf(" %s",&input);
   fputs(input,fp);
   
   fclose(fp);

   //getch();
   //return(0);
}
