#include<stdio.h>

int main()
{
	struct student{
    int student_no;
    int grade[6];
    };

    struct student student1; 
	student1.student_no = 2468;
    printf("The Student Number is %d , address is %X\n", student1.student_no, &student1.student_no);
    
    print_student_number(student1.student_no);
    
    getch();
    return(0);
}
void print_student_number(int n)
{
    printf("The student number is %d",n);                         
} 


