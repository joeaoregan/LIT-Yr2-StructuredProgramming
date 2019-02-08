#include<stdio.h>

int main()
{
	struct bank_account{       
       char *name;
       float bal;
       };

	struct Employee{      
       int number;
       struct bank_account bank_account; // Nested Structure
	};

    struct Employee employee1;
    
    employee1.number = 1234;
    employee1.bank_account.name = "Mary Ryan";
    employee1.bank_account.bal = 4000.00;
    
    printf("\nThe Employee Number is: %d",employee1.number);
    printf("\nThe Customer Name is: %s", employee1.bank_account.name);
    printf("\nThe Balance on the account is %.2f", employee1.bank_account.bal);

    getch();
    return(0);
}
