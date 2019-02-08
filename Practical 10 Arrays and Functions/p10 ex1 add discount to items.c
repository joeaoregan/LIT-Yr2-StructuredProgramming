/* Practical 10 Exercise 1 - Add A Discount Of 15% To Items Entered */

#include <stdio.h>
int main()
{
    float salesItem[3];
    float discountedItem[3];
    float discountRate=0.85;
    int i;
    
    printf("A Discount Of 15 Percent Will Be Applied To All Items Entered\n");
    
	for(i=0;i<sizeof(salesItem)/4;++i)
	{
	printf("Please Enter Sales Item %d Price: ",i+1);
    scanf("%f",&salesItem[i]);
	}
    
    //for(i=0;i<sizeof(salesItem);i++) // size of uses bytes (float=4bytes)(char=1byte)
    //for(i=0;i<10;i++)
    for(i=0;i<sizeof(salesItem)/4;i++) // for every float value is 4 bytes
    {
    discountedItem[i]=salesItem[i]*discountRate;
    
    printf("The Discounted Price For Item %d: %.2f\n",i+1,discountedItem[i]);
    }
    //printf("\n%d",sizeof(discountRate));
 getch();
 return(0);

}
