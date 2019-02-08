#include <stdio.h>

main()
{ 
   char number[2]={'1','2'};
   char output[3];
   
   FILE *fp;
 
   //fp = fopen("numbers.txt","w");
   fp = fopen("numbers.txt","r");
   
   //printf("Please Enter a Name: ");
   //scanf(" %s",&input);
   
   //fputs(number,fp);
   fgets(output,3,fp);
   printf("%s",output);
   
   fclose(fp);
   getch();
   return(0);
}
