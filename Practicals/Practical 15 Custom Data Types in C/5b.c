#include<stdio.h>

main()
{
      struct account{
      int acNum;
      char acType[10];
      float bal;
      }ac;
      
      struct account current;
      struct account savings;
      
      current.acNum=1;
      strcpy(current.acType,"Current");
      current.bal=123.45;
      
      printf("Account Number: %d",current.acNum);
      printf("\nAccount Type: %s",current.acType);
      printf("\nAccount Balance: %.2f",current.bal);
      
      savings.acNum=2;
      strcpy(savings.acType,"Savings");
      savings.bal=234.56;
      
      printf("\n\nAccount Number: %d",savings.acNum);
      printf("\nAccount Type: %s",savings.acType);
      printf("\nAccount Balance: %.2f",savings.bal);
      
      getch();
      return(0);
      }
      
