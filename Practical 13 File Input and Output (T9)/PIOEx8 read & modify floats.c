/*	Practical: File Input and Output
	Ex8
	Joe O'Regan
	26-11-2015  */
	
#include <stdio.h>

main()
{ 
   int i;
   float price,discount;
   
   FILE *fp;
   fp = fopen("salesitems.txt","r");
 
   for(i=0;i<6;i++)
   {
   fscanf(fp,"%f",&price);
   discount=price*.9;
   printf("Price is %.2f Discounted Price is %.2f\n",price,discount);
	}
	
   fclose(fp);
   
   getch();
   return(0);
}
