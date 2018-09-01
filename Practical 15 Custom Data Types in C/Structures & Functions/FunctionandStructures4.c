/*Program Demonstrates a pointer to structure which is then passed to a function.
Note:the structure can be referenced in the function and altered via the function*/
  
#include<stdio.h>

struct bank_account{
  
  int account_no;
  float balance;       
       
};

void print_statement(struct bank_account *);
void update_balance(struct bank_account *);

int main()
{
    struct bank_account savings;
    savings.account_no = 1234;
    savings.balance=40000.00;
    
    struct bank_account *psavings;
    
    psavings = &savings;
    
    print_statement(psavings);
    
    update_balance(psavings);
    print_statement(psavings);
    
    getch();
    return(0);
}
void print_statement(struct bank_account *s)
{     
printf("\n The Account number is %f",(*s).account_no);
printf("\n The Balance is %.2f",(*s).balance);

}
void update_balance(struct bank_account *s)
{     
  s->balance = 50000.00; 
}
