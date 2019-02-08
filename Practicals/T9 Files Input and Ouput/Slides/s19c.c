#include<stdio.h>
main()
{ 
   typedef struct
   {
      char name[10];
      int age;
   }student;
   
   FILE *fp;
   fp = fopen("studentdetails.txt","w");
   student s1;   
   printf("Please Enter a Name: ");
   scanf(" %s",&s1.name);
   printf("Please Enter your age: ");
   scanf(" %d",&s1.age);
   fprintf(fp,"%s\t",s1.name);
   fprintf(fp,"%d\t",s1.age);


   fclose(fp);
   getch();

}
