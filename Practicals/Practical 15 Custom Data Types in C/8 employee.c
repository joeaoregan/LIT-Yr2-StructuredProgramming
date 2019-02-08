#include<stdio.h>

main()
{
      struct employee{
      char eName[20];
      char eStreet[20];
      char eTown[20];
      char eCity[20];
      float salary;
      char payeClass;
      };
      
      struct employee emp;
      //struct employee e2;
      
      strcpy(emp.eName,"emp name");
      strcpy(emp.eStreet,"emp street");
      strcpy(emp.eTown,"emp town");
      strcpy(emp.eCity,"emp city");
      emp.salary=40000,00;
      emp.payeClass='A';
      
      printf("Employe 1:\n\n");
      printf("Address 1: \t%s",emp.eName);
      printf("\nAddress 2: \t%s",emp.eStreet);
      printf("\nAddress 3: \t%s",emp.eTown);
      printf("\nAddress 4: \t%s",emp.eCity);
      printf("\nSalary: \t%.2f",emp.salary);
      printf("\npayeClass: \t%c",emp.payeClass);
  
      getch();
      return(0);
      }
