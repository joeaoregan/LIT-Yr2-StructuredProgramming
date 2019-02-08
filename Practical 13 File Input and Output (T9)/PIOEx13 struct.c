/*	Practical: File Input and Output
	Ex13
	Joe O'Regan
	09-12-2015  */
	
#include <stdio.h>

main()
{ 
    struct studentRecords{
    char studentName[10];
    char courseCode[10];
    float courseFee;
    int date;
    }stu[2];
    
    int i;
    
   FILE *str;
   str = fopen("student.dat","w");
      
   //studentRecord st1;
   for(i=0;i<2;i++)
   {
   printf("Please Enter Student Name: ");
   scanf("%s",stu[i].studentName);
   printf("Please Enter Course Code: ");
   scanf("%s",stu[i].courseCode);
   printf("Please Enter Course Fee: ");
   scanf("%f",&stu[i].courseFee);
   printf("Please Enter Date (ddmmyyyy): ");
   scanf("%d",&stu[i].date);
   
   fprintf(str,"\n%s\t",stu[i].studentName);
   fprintf(str,"%s\t",stu[i].courseCode);
   fprintf(str,"%f\t",stu[i].courseFee);
   fprintf(str,"%d\t",stu[i].date);
   }
   fclose(str); // close file write
    
    FILE *fp;
    fp = fopen("student.dat","r");;
    
    for(i=0;i<2;i++)
    {
     fscanf(fp,"\n%[^\t]",stu[i].studentName);
	 fscanf(fp," %s",&stu[i].courseCode);
	 fscanf(fp," %f",&stu[i].courseFee);
	 fscanf(fp," %d",&stu[i].date);
	 
	 printf("\nRecord %d\n",i+1);
	 printf("Student Name: %s\n",stu[i].studentName);
	 printf("Course Code %s\n",stu[i].courseCode);
	 printf("Course Fee %f\n",stu[i].courseFee);
	 printf("Course Date %d\n\n",stu[i].date);
    }
    
    fclose(fp); // close file read
    
    getch();
    return(0);
}
