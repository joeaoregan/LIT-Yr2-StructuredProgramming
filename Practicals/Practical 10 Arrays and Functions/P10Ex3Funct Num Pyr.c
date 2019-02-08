
#include <stdio.h>
// Global variables
int i,rows;

int main()
{
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    
    for(i=1;i<=rows;++i)
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
	int space;
	
	for(space=0;space<rows-i;++space)
        {
           printf("-");
        }
}

// Function 2: Numbers
numbers()
{
	int j;
	
	for(j=0;j<i;++j)
        {
           printf("%d",i);
           
           if(j<=(i-1))printf("-");
		} 
}
