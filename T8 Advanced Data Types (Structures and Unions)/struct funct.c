#include<stdio.h>

struct student{int student_no;};        // has to be global variable
   
int main()
{
//    struct student{int student_no;}; 
    
    struct student student1;
    student1.student_no = 2468;
    
    printf("In main \nStudent No: %d address: %X",student1.student_no,&student1.student_no);
    // pass by value - copy of the data passed to the function
    // pass by reference - pointer to the memory address
    print_student_numbers(student1);
    
    getch();
    return(0);
}
print_student_numbers(struct student n)
{
     printf("\nIn function\nThe Student Number is %d, address is %X\n",n.student_no,&n.student_no);
     }
