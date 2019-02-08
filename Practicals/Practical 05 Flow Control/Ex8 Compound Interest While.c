#include<stdio.h>

int main()
{

float balance=50000.00;
float interestRate=0.025;
float interest=0,interestTotal=0;
int i=1,numberOfYears=4;

while (i<=numberOfYears)
{
 interest=balance*interestRate;
  
 printf("Interest For Year %d is %.2f\n",i,interest);
 
 balance+=interest;
 interestTotal+=interest;
 i++;
}

printf("Total Interest Earned over %d years Is %.2f\n",numberOfYears,interestTotal);

getch();
return(0);
}
