#include<stdio.h>
int main()
{
    int rows,i,j,k=0;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;++j)
          printf("%d ",k+j);
        ++k;
        printf("\n");
    }
}
