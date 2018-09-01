#include<stdio.h>

main()
{
      struct address{
      char aName[20];
      char aStreet[20];
      char aTown[20];
      char aCity[20];
      }home,work;
      
      //struct address home;
      //struct address work;
      
      strcpy(home.aName,"home name");
      strcpy(home.aStreet,"home street");
      strcpy(home.aTown,"home town");
      strcpy(home.aCity,"home city");
      
      printf("Address 1: %s",home.aName);
      printf("\nAddress 2: %s",home.aStreet);
      printf("\nAddress 3: %s",home.aTown);
      printf("\nAddress 4: %s",home.aCity);
      
      strcpy(work.aName,"work name");
      strcpy(work.aStreet,"work street");
      strcpy(work.aTown,"work town");
      strcpy(work.aCity,"work city");
      
      printf("\nAddress 1: %s",work.aName);
      printf("\nAddress 2: %s",work.aStreet);
      printf("\nAddress 3: %s",work.aTown);
      printf("\nAddress 4: %s",work.aCity);
      
      getch();
      return(0);
      }
      
