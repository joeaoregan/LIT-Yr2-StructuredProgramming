#include<stdio.h>

int main()
{
 typedef int age;
 typedef float height;
 
 age male = 40;
 age female = 35;
 
 height man = 6.2;
 height woman = 5.3;
  printf("\nJack: Your age is %d, your height is %.1f",male,man);
 printf("\nMary: Your age is %d, your height is %.1f",female,woman);


	getch();
	return(0);
}
