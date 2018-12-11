#include <stdio.h>

main()
{ 
   typedef struct
   {
      char name[10];
      int age;
   }student;
   
   FILE *fp;
   fp = fopen("studentdetails.txt","r");
   student s1;
   
   fscanf(fp,"%[^\t]",s1.name);
   fscanf(fp," %d",&s1.age);
   
   printf("%s",s1.name);
   printf("\n%d",s1.age);
   
   fclose(fp);
   getch();
}
