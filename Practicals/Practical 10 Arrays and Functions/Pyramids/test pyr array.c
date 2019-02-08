
#include <stdio.h>
int main()
{
	char asterisk[]="******";
	
    int i,j,l,space,rows,k=0;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    
    for(i=1;i<=rows;++i) // i increments - use to print numbers
    {
        for(space=1;space<=rows-i;++space)
        {
           printf("- ");
        }
        
           printf("%d ",i);
    	
        for(space=1;space<=rows-i;++space)
        {
           printf("- ");
        }
        k=0;
        printf("\n");
    }
    return 0;
}
