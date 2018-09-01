/*Practical 3 - Demonstrate the use of rour common Data Types in C Programming Language
  Program to display char, int, float, string */

/* Joe O'Regan */
/* 23-09-2015*/

#include<stdio.h>
main()
{
      int age;
      float balance; 
      char sex;
      
      char name[]="John";
      sex = 'M';
      age = 40;
      balance = 100.00;
      
      printf("Account Holder Name: %s \n", name);
      printf("Account Holder Age: %d \n", age);
      printf("Account Holder Gender: %c \n", sex);
      printf("The balance of %s is %.2f pounds", name, balance);
      
      getch();
      return(0);
      }
      
