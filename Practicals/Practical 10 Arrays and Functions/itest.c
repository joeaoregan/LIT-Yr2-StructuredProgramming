#include <stdio.h>
// Global variables
int i,lines;

int main()
{
    printf("Enter Number Of Lines Between 1 and 6: ");
    scanf("%d",&lines);
    
    for(i=0;i<lines;++i)
    {
    	hyphen();
        numbers();       
		hyphen();
		
        printf("\n");
    }
    
	return 0;
}
// Function 1: Hyphens
hyphen()
{
	int dash;
	
	for(dash=1;dash<lines-i;++dash)
        {
           printf("-"); // was hyphen
        }
}
// Function 2: Numbers
numbers()
{
	int j;
	int arrNum[]={1,2,3,4,5,6};
	
	for(j=0;j<i+1;++j)
        {
           printf("%d",arrNum[i]);
           
           if(j<i)printf("-");
		} 
}
