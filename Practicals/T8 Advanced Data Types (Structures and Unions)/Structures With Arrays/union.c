// Unions
// used interchangeably between a char and a float

#include<stdio.h>

union marks{
      float perc;
      char grade;
      };
      
int main()
{
union marks student1;

student1.perc = 98.5;
printf("Marks are %f, address is %d\n", student1.perc,&student1.perc);

student1.grade='a';
printf("Grade is %c, address is %d\n", student1.grade,&student1.grade);
// outputs same memory location
// outputs interchangeably

getch();
return(0);
}
