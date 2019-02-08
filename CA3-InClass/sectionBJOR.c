/* sectionBJOR */

/* Joe O'Regan */
/* 21-10-2015 */

#include<stdio.h>
main()
{
    float discount;
    int i;  
	int arrBarCode[6]={12456,18724,14392,12876,15375,16374};
	float arrSalesItem[6]={104.32,20.45,60.83,30.86,20.51,60.32};
    float arrDiscountCost[6];
    float totalSales=0,totalDiscount=0,discountedSale=0;
    char askCustContinue;
	
	// repeats until 'n' is input by "cashier"
	do
	{
    // initialise variables for do while loop
    discount=0;
    totalSales=0;
    discountedSale=0;
    totalDiscount=0;
    
    // take in value for discount
	printf("please enter the discount you wish to apply!");
	scanf("%f",&discount);
	
	for(i=0;i<6;++i)
	{
     // output barcode               
     printf("\nBarcode:%d",arrBarCode[i]);
     
     // output sales item
     printf("\tSales item:%.2f",arrSalesItem[i]);
     
     
     // discount cost of item
     arrDiscountCost[i]=arrSalesItem[i] - (arrSalesItem[i])*(discount/100);
     printf("\tless Discounted Cost of Item:%.2f",arrDiscountCost[i]);
     
     // add Sales Item price to total
     totalSales+=arrSalesItem[i];
     
     // add Discounted price to discount total
     totalDiscount+=arrDiscountCost[i];
     
     } // end of for loop
     
     // calculate total discount to take away "less total discount"
     discountedSale=totalSales - totalDiscount;
     
     // Total Sales
     printf("\n\n\t\tTotal Sales:%.2f",totalSales);
     // Less Total Discount
     printf("\tLess Total Discount:%.2f\n",discountedSale);
     // Total Cost of Sales
     printf("\n\t\tTotal Cost of Sales:%.2f\n",totalDiscount);
     
     // calculate if valued customer
     if(discountedSale>20)
     {
      printf("\n********************Valued Customer*******************************************\n");
     
      printf("\nAs a Valued Customer we now offer discounts to you greater than 20.00 per week\n");
     }
     
     printf("\nDo you wish to continue?");
     scanf(" %c",&askCustContinue);
     
     } // end of do while loop
     while(askCustContinue!='n');
     
      getch();
      return(0);
      }
      
