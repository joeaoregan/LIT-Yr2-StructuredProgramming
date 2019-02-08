/*Practical 10 Exercise 2 Menu With Functions*/
#include<stdio.h>

int arrWeeklyUsage[3];

int main()
{
    char selection;

 do
 {
 	printf("\na. Enter weekly water usage amounts.");
    printf("\nb. Display weekly water usage amounts.");
    printf("\nc. Calculate water usage cost given that a gallons of water cost €0.02 per day");
    printf("\nd. Display water usage by week Highest to Lowest");
    printf("\ne. Display water usage by week Lowest to Highest");
    printf("\nf. Exit");
    printf("\nEnter your selection: ");
    scanf(" %c",&selection);    
	              
    switch(selection)
    {
     case 'a': printf("\nOption a:\n");
     enterUsage();
     break;
     case 'b': printf("\nOption b:\n");
     displayUsage();
     break;
     case 'c':printf("\nOption c:\n");
     calculateCost();
     break;
     case 'd':printf("\nOption d:\n");
     sortHighLow();
     break;
     case 'e':printf("\nOption e:\n");
     sortLowHigh();
     break;
     }         
 }while(selection != 'f');
}

// Function 1: Enter weekly water usage amounts
enterUsage()
{
	int i;
	for(i=0;i<sizeof(arrWeeklyUsage)/4;++i) // divide by byte size of 4
	{
	printf("\nEnter weekly water usage amounts Week %d: ",i+1);
	scanf("%d",&arrWeeklyUsage[i]);
	}
}
// Function 2: Display weekly water usage amounts
displayUsage()
{
	int i;
	for(i=0;i<sizeof(arrWeeklyUsage)/4;++i)
	{
	printf("\nWeekly water usage amounts Week %d: %d\n",i+1,arrWeeklyUsage[i]);
	}
}
// Function 3: Calculate water usage cost
calculateCost()
{
	int i;
	float cost;
	
	for(i=0;i<sizeof(arrWeeklyUsage)/4;++i)
	{
		cost=arrWeeklyUsage[i]*.02;
		printf("\nWeek %d Water Usage Cost Is: %.2f",i+1,cost);
	}
}
// Function 4: Sort Highest to Lowest
sortHighLow()
{
int i,j,temp;
int arrSort[sizeof(arrWeeklyUsage)/4];
for(i=0;i<sizeof(arrWeeklyUsage)/4;++i)
arrSort[i]=arrWeeklyUsage[i];

	for(i=0;i<sizeof(arrWeeklyUsage)/4;++i)
	{
		for(j=0;j<sizeof(arrWeeklyUsage)/4;++j)
		{
			if(arrSort[i]>arrSort[j])
			{										
			 temp=arrSort[i];	
			 arrSort[i]=arrSort[j];
	 		 arrSort[j]=temp;	
	 		}
		}
	}
	printf("Values High To Low Are: \n");
	for(i=0;i<sizeof(arrWeeklyUsage)/4;++i)
	{
		printf("\n%d",arrSort[i]);
	}
}
// Function 5: Sort Lowest to Highest
sortLowHigh()
{
int i,j,temp;
int arrSort[sizeof(arrWeeklyUsage)/4];
for(i=0;i<sizeof(arrWeeklyUsage)/4;++i)
arrSort[i]=arrWeeklyUsage[i];

	for(i=0;i<sizeof(arrWeeklyUsage)/4;++i)
	{
		for(j=0;j<sizeof(arrWeeklyUsage)/4;++j)
		{
			if(arrSort[i]<arrSort[j])
			{										
			 temp=arrSort[i];	
			 arrSort[i]=arrSort[j];
	 		 arrSort[j]=temp;	
	 		}
		}
	}
	printf("Values High To Low Are: \n");
	for(i=0;i<sizeof(arrWeeklyUsage)/4;++i)
	{
		printf("\n%d",arrSort[i]);
	}
}
