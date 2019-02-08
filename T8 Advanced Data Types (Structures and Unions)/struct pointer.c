#include<stdio.h>
struct bank_account
{
       char *name; // pointer to string not name[]
      // char name[1; // use pointer to a string instead of char array
       float bal;
       };

int main()
{
    
    struct bank_account customer1;
    customer1.name="Mary Ryan"; 
    customer1.bal=4000.00;
    
    struct bank_account *p=&customer1;
     
    print_statement(p);
    
    getch();
    return(0);
}
print_statement(struct bank_account *p)
{
printf("\nThe Customer Name is: %s", p->name);
printf("\nThe Balance On The Account Is %.2f",p->bal);
}
