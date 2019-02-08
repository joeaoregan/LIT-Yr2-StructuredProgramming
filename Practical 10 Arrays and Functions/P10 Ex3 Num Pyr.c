#include <stdio.h>
int main()
{
    int i,j,k,l,rows,space;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i)
    {
    	for(space=1;space<=rows-i;++space)
        {
           printf("-");
        }
        
        for(j=1;j<=i;++j)
        {
           printf("%d",i);
           
           if(j<=(i-1))printf("-");
		} 
		
		for(space=1;space<=rows-i;++space)
        {
           printf("-");
        }
        printf("\n");
    }
    
	return 0;
}
