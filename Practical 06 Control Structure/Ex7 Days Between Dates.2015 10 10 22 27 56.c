/* Exercise 7: Calculate the number of days between 2 dates */

/* Joe O'Regan */
/* 10-10-2015 */

#include<stdio.h>
int main()
{
	int arrYear[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int date1,date2,year,month,day;
        
    printf("Please Enter Date 1 in form DDMMYYYY\n");
	scanf("%d",&date1); 
	
	year=date1%10000;
	date1=date1/10000;
	
	month=date1%100;
	date1=date1/100;
	
	day=date1;
	
	
	printf("year %d\n",year);   
    printf("month %d\n",month);  
    printf("day %d\n",day);   
        
    getch();
    return(0);
 } // end of main
      
