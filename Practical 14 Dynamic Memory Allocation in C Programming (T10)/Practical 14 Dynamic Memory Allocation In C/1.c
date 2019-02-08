#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(void)
{
    char *s;
    register int t;
    
    s = malloc(80);
    
    if(s==NULL)
    {
    printf("Memory request failed\n");
    }
    
    printf("Please enter a line of text\n");
    gets(s);
    //for(t=strlen(s)-1;t>0;t--) // doesn't output 1st character
    for(t=strlen(s)-1;t>=0;t--)  // outputs first character
    putchar(s[t]);
    
    free(s);
    
    getch();
    return(0);
}
