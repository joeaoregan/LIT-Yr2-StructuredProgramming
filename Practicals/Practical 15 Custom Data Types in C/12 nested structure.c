#include<stdio.h>

main()
{
      struct bankAC{
      char *name;
      float bal;
      };
      
      struct employee{
      	int number;
      	struct bankAC bankAC;
      };
      
	struct employee emp1;
	
	emp1.number = 1234;
	emp1.bankAC.name="Mary Ryan";
	emp1.bankAC.bal=4000.00;
	
	printf("\nThe Employee Number is: %d",emp1.number);
	printf("\nThe Customer Name is: %s",emp1.bankAC.name);
	printf("\nThe Balance on the account is: %.2f",emp1.bankAC.bal);
	
  
      getch();
      return(0);
}
