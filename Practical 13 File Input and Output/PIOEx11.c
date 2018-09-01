/*	Practical: File Input and Output
	Ex11
	Joe O'Regan
	27-11-2015  */
	
#include <stdio.h>

main()
{ 
   int i;
   float kilo,mile;
   float conversion=0.621371;
   
   FILE *fp;
   FILE *fm;
   fp = fopen("fitbitKilo.txt","r");
   fm = fopen("fitbitMiles.txt","w");
 
   for(i=0;i<6;i++)
   {
   fscanf(fp,"%f",&kilo);
   mile=kilo*conversion;
   
   printf("%.2f kilometers is %.2f miles\n",kilo,mile);
   
   fprintf(fm,"%f\t",mile);
   
   //printf("%.2f kilometers is %.2f miles\n",kilo,mile);
	}
	
   fclose(fp);
   
   getch();
   return(0);
}
