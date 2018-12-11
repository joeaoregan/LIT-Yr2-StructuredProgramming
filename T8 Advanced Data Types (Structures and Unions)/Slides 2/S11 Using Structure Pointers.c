#include<stdio.h>

struct bank_account{
	char *name;
	float bal;
};

int main()
{
    struct bank_account customer1;
    customer1.name = "Mary Ryan";
    customer1.bal = 4000.00;
         
    struct bank_account *p=&customer1;
    print_statement(p);
    
    getch();
    return(0);
}
void print_statement(struct bank_account *p)
{
  printf("\nThe Customer Name is: %s", p->name);
  printf("\nThe Balance on the account is %.2f", p->bal);
}

