#include<stdio.h>

main()
{
      struct address{
      char aName[20];
      char aStreet[20];
      char aTown[20];
      char aCity[20];
      }addr;
      
      strcpy(addr.aName,"name");
      strcpy(addr.aStreet,"street");
      strcpy(addr.aTown,"town");
      strcpy(addr.aCity,"city");
      
      printf("Address 1: %s",addr.aName);
      printf("\nAddress 2: %s",addr.aStreet);
      printf("\nAddress 3: %s",addr.aTown);
      printf("\nAddress 4: %s",addr.aCity);
      
      
      getch();
      return(0);
      }
      
