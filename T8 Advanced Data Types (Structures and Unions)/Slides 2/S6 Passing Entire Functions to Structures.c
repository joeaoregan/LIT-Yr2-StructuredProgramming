#include<stdio.h>

struct student {
int student_no;
int grade[6];
};
    
int main()
{


    struct student student1; 
    student1.student_no = 2468;
    
    print_student_number(student1);
    
    getch();
    return(0);
}
void print_student_number(struct student n)
{
  printf("\nThe Student Number is %d , address is %X\n", n.student_no, &n.student_no);
} 


