#include <stdio.h>

main()
{ 
   //typedef struct
   //{
   //   char name[10];
   //   int age;
   //}student;
   int i,num;
   
   FILE *fp;
   fp = fopen("numbers.txt","r");
   //student s1;
   
   //fscanf(fp,"%[^\t]",s1.name);
   for(i=1;i<=10;i++)
   {
   //fscanf(fp," %d",&s1.age);
   fscanf(fp," %d",&num);
   
   //printf("%s",s1.name);
   //printf("\n%d",s1.age);
   printf("%d\n",num);
}

   fclose(fp);
   getch();
}
