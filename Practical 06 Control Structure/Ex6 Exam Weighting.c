/* Exercise 6: Exam Weighting */

/* Joe O'Regan */
/* 09-10-2015 */

#include<stdio.h>
int main()
{
    float ca,fe,caScore,feScore,totalScore;
    int i=0,choice=0;
    
    printf("Please Select Exam Weighting:\n");
    printf("Enter 1 for 50:50\n");
    printf("Enter 2 for 40:60\n");
    scanf("%d",&choice);
    
	if (choice==1)
    {
    	ca=.5;
    	fe=.5;
    }
    else if (choice==2)
    {
    	ca=.4;
    	fe=.6;
	}
    else 
	{
    	printf("The Option You Selected is unavailable\n");
	}         
             
    printf("You have Chosen Option %d\n",choice);         
    
    for(i=1;i<=3;i++)
	{
	printf("\nEnter Continous Assessment Score %d: ",i);
	scanf("%f",&caScore);
	printf("Enter Final Exam Score: ");
	scanf("%f",&feScore);
	
	// Calculate Overall Mark
	totalScore=(caScore*ca)+(feScore*fe);
	
	// Output Overall Mark
	printf("Overall Mark is: %.2f\n",totalScore);
	
	// Increment Counter
	//i++;	
	}
	//while(i<3);         
    getch();
    return(0);
 } // end of main
      
