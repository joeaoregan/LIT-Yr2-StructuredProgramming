/*Practical 10 Exercise 2 Menu With Functions*/
#include<stdio.h>

int main()
{
    char selection;

 //do
 //{
 	printf("\na. Enter weekly water usage amounts.");
    printf("\nb. Display weekly water usage amounts.");
    printf("\nc. Calculate water usage cost given that a gallons of water cost €0.02 per day");
    printf("\nd. Display water usage by week Highest to Lowest");
    printf("\ne. Display water usage by week Lowest to Highest");
    printf("\nEnter your selection");
    scanf(" %c",&selection);    
	              
    switch(selection)
    {
     case 'a': printf("\na. Enter weekly water usage amounts.");
     break;
     case 'b':printf("\nb. Display weekly water usage amounts.");
     break;
     case 'c':printf("\nc. Calculate water usage cost given that a gallons of water cost €0.02 per day");
     break;
     case 'd':printf("\nd. Display water usage by week Highest to Lowest");
     break;
     case 'e':printf("\ne. Display water usage by week Lowest to Highest");
     break;
     }         
 //}while(selection != 6);
}
