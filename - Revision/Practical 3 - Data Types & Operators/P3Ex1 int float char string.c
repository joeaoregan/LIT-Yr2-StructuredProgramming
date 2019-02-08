/*Practical 3 - Demonstrate the use of rour common Data Types in C Programming Language
  Program to display char, int, float, string */

/* Joe O'Regan */
/* 21-10-2015*/

#include<stdio.h>
main()
{
	  // initialise variables
      int age=40; // int
      float balance=100.00; // float
      char sex='M'; //char 
      char name[]="John"; // string
      
      printf("Account Holder Name: %s \n", name);
      printf("Account Holder Age: %d \n", age);
      printf("Account Holder Gender: %c \n", sex);
      printf("The balance of %s is %.2f pounds", name, balance);
      
      getch();
      return(0);
      
      } // end of main
      
