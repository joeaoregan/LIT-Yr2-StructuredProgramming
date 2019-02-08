/*	Practical: File Input and Output
	Ex14
	Joe O'Regan
	09-12-2015  */
	
#include <stdio.h>

main()
{ 
    int size=1;   
    int i;
    int price=2; // 2 per hour
    
    struct carPark{
    int ticketNum;
    int arrtime;
    int deptime;
    int cost;
    }car[size];
     
   FILE *cpr;
   cpr = fopen("carpark.txt","w");
      
   for(i=0;i<size;i++)
   {
   printf("Ticket Number: ");
   scanf("%d",&car[i].ticketNum);
   
   printf("Arive Time: ");
   scanf("%d",&car[i].arrtime);
   
   printf("Depart Time: ");
   scanf("%d",&car[i].deptime);
   
   car[i].cost = (car[i].deptime - car[i].arrtime) * price; // only doing hour not mins
   
   fprintf(cpr,"\n%d\t",car[i].ticketNum);
   fprintf(cpr,"%d\t",car[i].arrtime);
   fprintf(cpr,"%d\t",car[i].deptime);
   fprintf(cpr,"%d\t",car[i].cost);
   }
   fclose(cpr); // close file write
   
    FILE *fp;
    fp = fopen("carpark.txt","r");;
    
    for(i=0;i<size;i++)
    {
     fscanf(fp,"\n%d[^\t]",&car[i].ticketNum);
	 fscanf(fp," %d",&car[i].arrtime);
	 fscanf(fp," %d",&car[i].deptime);
	 fscanf(fp," %d",&car[i].cost);
	 
	 printf("\nRecord %d\n",i+1);
	 printf("Ticket Number: %d\n",car[i].ticketNum);
	 printf("Arrive Hour: %d\n",car[i].arrtime);
	 printf("Depart Hour %d\n",car[i].deptime);
	 printf("Cost %d\n\n",car[i].cost);
    }
    
    fclose(fp); // close file read
    
    getch();
    return(0);
}
