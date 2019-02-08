/* Practical 10 Exercise 1 - Add A Discount Of 15% To Items Entered */

 	float salesItem[10];
    float discountedItem[10];
    float discountRate=0.85;
    int i;
    
#include <stdio.h>
int main()
{
    printf("A Discount Of 15 Percent Will Be Applied To All Items Entered\n");
    itemPrice();
    discountPrice();
    
 getch();
 return(0);
}

/* Function 1: Input Item Price */
itemPrice()
{
	for(i=0;i<sizeof(salesItem)/4;++i)
	{
	printf("Please Enter Sales Item %d Price: ",i+1);
    scanf("%f",&salesItem[i]);
	}
}
/* Function 2: Output Discounted Price */
discountPrice()
{
	for(i=0;i<sizeof(salesItem)/4;i++) // for every float value is 4 bytes
    {
    discountedItem[i]=salesItem[i]*discountRate;
    
    printf("The Discounted Price For Item %d: %.2f\n",i+1,discountedItem[i]);
    }
}
