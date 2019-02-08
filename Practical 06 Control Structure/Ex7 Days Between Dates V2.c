/* Exercise 7: Calculate the number of days between 2 dates */

/* Joe O'Regan */
/* 10-10-2015 */

#include<stdio.h>
int main()
{
	int arrYear[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int date1,date2,year1,year2,month1,month2,i,j,sum1=0,sum2=0,noOfDays1,noOfDays2;
        
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
	
	// add number of days in each preceding month
	for(i=0;i<(month1-1);i++)
	{
		sum1+=arrYear[i];
	}
	
	for(j=0;j<(month2-1);j++)
	{
		sum2+=arrYear[j];
	}
	// add number of days in current month
	noOfDays1=sum1+date1;
	noOfDays2=sum2+date2;
	
	//printf("year 1: %d\n",year1);   
    //printf("month 1: %d\n",month1);  
    //printf("day 1: %d\n",date1);
	printf("Number of days 1 is %d\n",noOfDays1);
	
	//printf("year 2: %d\n",year2);   
    //printf("month 2: %d\n",month2);  
    //printf("day 2: %d\n",date2);
	printf("Number of days 2 is %d\n",noOfDays2);   
	
	// print no of days
	if (noOfDays2>noOfDays1)
	{
	printf("Number of days between dates = %d", noOfDays2-noOfDays1);
	}
	else if (noOfDays1>noOfDays2)
	{
		printf("Number of days between dates = %d",noOfDays1-noOfDays2);
	}
	else
	{
	printf("The dates are the same OR invalid");
	}
	    
    getch();
    return(0);
 } // end of main
      
