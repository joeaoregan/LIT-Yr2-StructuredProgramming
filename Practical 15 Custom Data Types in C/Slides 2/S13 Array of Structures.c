#include<stdio.h>

struct bank_account{
	char *name;
	float bal;
};

int main()
{
    struct bank_account customers[10];
    int i=0;
    
    for(i=0;i<10;i++)        
    {
    customers[i].name = "Mary Ryan";
    customers[i].bal = 4000.00;
    }
    
    for(i=0;i<10;i++)        
    {    
    printf("\nThe Customer Name is: %s", customers[i].name);
    printf("\nThe Balance on the account is %.2f", customers[i].bal);
    }
   
    getch();
    return(0);
}
