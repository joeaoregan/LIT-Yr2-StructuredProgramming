/* Exercise 7: Calculate the number of days between 2 dates */

/* Joe O'Regan */
/* 10-10-2015 */

#include<stdio.h>
int main()
{
	int arrYear[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int date1,date2,year1,year2,month1,month2,i,sum=0,noOfDays;
        
    printf("Please Enter Date 1 in form DDMMYYYY\n");
	scanf("%d",&date1); 
	printf("Please Enter Date 2 in form DDMMYYYY\n");
	scanf("%d",&date2); 
	
	// get years
	year1=date1%10000;
	date1=date1/10000;
	year2=date2%10000;
	date2=date2/10000;
	
	// get months
	month1=date1%100;
	date1=date1/100;
	month2=date2%100;
	date2=date2/100;
	
	
	//--month;
	for(i=0;i<(month1-1);i++)
	{
		sum+=arrYear[i];
	}
	noOfDays=sum+day1;
	
	printf("year %d\n",year1);   
    printf("month %d\n",month1);  
    printf("day %d\n",date1);
	printf("Number of days is %d\n",noOfDays);   
        
    getch();
    return(0);
 } // end of main
      
