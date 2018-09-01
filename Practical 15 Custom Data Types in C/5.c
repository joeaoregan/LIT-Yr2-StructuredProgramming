#include<stdio.h>

main()
{
      struct account{
      int acNum;
      char acType[10];
      float bal;
      }ac;
      
      ac.acNum=1;
      strcpy(ac.acType,"Student");
      //ac.acType[10]="Student";
      ac.bal=123.45;
      
      printf("Account Number: %d",ac.acNum);
      printf("\nAccount Type: %s",ac.acType);
      printf("\nAccount Balance: %.2f",ac.bal);
      
      getch();
      return(0);
      }
      
