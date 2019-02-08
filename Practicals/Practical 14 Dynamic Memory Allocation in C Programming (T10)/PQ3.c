#include <stdio.h>
#include <stdlib.h>

int pwr(int a, int b);

int main(void)
{
    int(*p)[10];
    register int i,j;
    
    p = malloc(40*sizeof(int));
    
    if(!p)
    {
     printf("Memorey request failed\n");
    }
           
    for(j=1;j<11;j++)
     for(i=1;i<5;i++) p[i-1][j-1]=pwr(j,i);
     
     for(j=1;j<11;j++)
     {
      for(i=1;i<5;i++) printf("%10d",p[i-1][j-1]);
      printf("\n");
     }
     
     free(p);
    
    getch();
    return(0);
}

pwr(int a, int b)
{
        register int t=1;
        for(;b;b--)
        t=t*a;
        return t;
}
