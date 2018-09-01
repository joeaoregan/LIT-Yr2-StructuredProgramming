/* Practical 6: Ex 6 */

/* Demonstrate the use of a loop by creating a C program to take in the weighting for an exam module */

/* Joe O'Regan */
/* 21-10-2015 */

#include <stdio.h>
main()
{
    int weight,i=0;
    float ca,fe,overallMark;
    
    do
    {
	printf("Enter Weighting For Module, Option 1: 50:50, Option 2: 40:60: ");
	scanf("%d",&weight);
	
	printf("Please Enter Mark for CA: ");
	scanf("%f",&ca);
	
    printf("Please Enter Mark for Final Exam: ");
	scanf("%f",&fe);
		
	if (weight==1)
    {
     overallMark=(ca*.5)+(fe*.5);
    } // end of if
    else
    {
     overallMark=(ca*.4)+(fe*.6);
    } // end of else
     
	printf("Overall Module Mark Is: %.2f\n",overallMark);
	
    }
	while(i<10);
	
	getch();
	return(0);
} //  end of main
