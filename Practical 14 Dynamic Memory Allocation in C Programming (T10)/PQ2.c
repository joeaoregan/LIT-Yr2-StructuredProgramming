#include <stdio.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s;
    register int t;
    
    s = malloc(sizeof(char)* 15);             // memory allocate
        
    if(s==NULL)
    {
     printf("Memory request failed\n");
    }
    
    printf("Please enter a line of text\n");
    gets(s);
    
    for(t=strlen(s)-1;t>=0;t--) // output in reverse
    putchar(s[t]);
    
    free(s);
    
    getch();
    return(0);
}
