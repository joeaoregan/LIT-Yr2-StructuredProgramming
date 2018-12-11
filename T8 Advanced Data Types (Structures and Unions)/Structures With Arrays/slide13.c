// Example a structure which contains arrays

#include<stdio.h>
int main(void)
{
struct student
{
char name[30];
char grade;
}student_list_A[10];
 
puts("\nEnter your Name");
gets(student_list_A[0].name);
puts("Enter your grade");
scanf(" %c",&student_list_A[0].grade);

printf("\nYour name is: %s", student_list_A[0].name);
printf("\nYour grade is: %c",student_list_A[0].grade);

getch();
return(0);
}
