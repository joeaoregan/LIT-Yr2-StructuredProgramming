#include <stdio.h>

main()
{
   FILE *fp;
   //int buff[255];
   int cel,i;

   fp = fopen("tempcel.txt", "r");
   
   //fscanf(fp, "%s", buff);
   //printf("1: %s\n", buff );
   //fscanf(fp,"\n%[^\t]",&cel);
   for(i=0;i<10;++i)
   {
    fscanf(fp, "\n%d", &cel);
    printf("\n%d", cel);
   }
   //fgets(buff, 255, (FILE*)fp);
   //printf("2: %s\n", buff );
   
   //fgets(buff, 255, (FILE*)fp);
   //printf("3: %s\n", buff );
   fclose(fp);

getch();
return(0);
}
