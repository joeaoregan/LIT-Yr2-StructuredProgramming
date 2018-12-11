
#include <stdio.h>

main()
{ 
   //typedef struct
   //{
   //   char name[10];
   //   int age;
   //}student;
   int i;
   
   
   FILE *fp;
   fp = fopen("numbers.txt","w");
   //student s1;   
   
   //printf("Please Enter a Name: ");
   //scanf(" %s",&s1.name);
   
   //printf("Please Enter your age: ");
   //scanf(" %d",&s1.age);
   
   //fprintf(fp,"%d\t",s1.name);
   for(i=1;i<=10;i++)
   {
   fprintf(fp,"%d\t",i);
	}
	
   fclose(fp);
}
