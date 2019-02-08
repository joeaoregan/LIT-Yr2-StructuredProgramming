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
      
      struct employee e1;
      struct employee e2;
      
      strcpy(e1.eName,"e1 name");
      strcpy(e1.eStreet,"e1 street");
      strcpy(e1.eTown,"e1 town");
      strcpy(e1.eCity,"e1 city");
      e1.salary=40000,00;
      e1.payeClass='A';
      
      printf("Employe 1:\n\n");
      printf("Address 1: \t%s",e1.eName);
      printf("\nAddress 2: \t%s",e1.eStreet);
      printf("\nAddress 3: \t%s",e1.eTown);
      printf("\nAddress 4: \t%s",e1.eCity);
      printf("\nSalary: \t%.2f",e1.salary);
      printf("\npayeClass: \t%c",e1.payeClass);
      
      strcpy(e2.eName,"e2 name");
      strcpy(e2.eStreet,"e2 street");
      strcpy(e2.eTown,"e2 town");
      strcpy(e2.eCity,"e2 city");
      e2.salary=55000,00;
      e2.payeClass='B';
      
      printf("\n\nEmploye 2:\n\n");
      printf("\nAddress 1: \t%s",e2.eName);
      printf("\nAddress 2: \t%s",e2.eStreet);
      printf("\nAddress 3: \t%s",e2.eTown);
      printf("\nAddress 4: \t%s",e2.eCity);
      printf("\nSalary: \t%.2f",e2.salary);
      printf("\npayeClass: \t%c",e2.payeClass);
      
      getch();
      return(0);
      }
