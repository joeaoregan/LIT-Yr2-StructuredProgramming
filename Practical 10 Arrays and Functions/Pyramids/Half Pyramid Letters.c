#include<stdio.h>
int main()
{
    int i,j;
    char input,temp='A';
    printf("Enter uppercase character you want in triangle at last row: ");
    scanf("%c",&input);
    for(i=1;i<=(input-'A'+1);++i)
    {
        for(j=1;j<=i;++j)
           printf("%c",temp);
        ++temp;
        printf("\n");
    }
    return 0;
}
