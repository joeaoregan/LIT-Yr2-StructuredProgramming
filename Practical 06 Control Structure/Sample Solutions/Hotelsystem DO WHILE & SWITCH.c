/*Hospital Reception System*/
#include<stdio.h>

int main()
{
    int selection=0;

 do
 {
    
    printf("\n\nHospital Registration System");
    printf("\n1.Register Patient Details");
    printf("\n2.Display Ward Details");
    printf("\n3.View On-Call Contacts");
    printf("\n4.View Visitor Log");
    printf("\n5.Register a Staff Member");
    printf("\n6.Exit");
    printf("\nEnter the number associated with your selection");
    scanf("%d",&selection);    
	              
    switch(selection)
    {
     case 1: printf("\n1.You wish to Register Patient Details");
     break;
     case 2:printf("\n2.You wish to Display Ward Details");
     break;
     case 3:printf("\n3.You wish to View On-Call Contacts");
     break;
     case 4:printf("\n4.You wish to View Visitor Log");
     break;
     case 5:printf("\n5.You wish to Register a Staff Member");
     break;
     }         
 }while(selection != 6);
}
