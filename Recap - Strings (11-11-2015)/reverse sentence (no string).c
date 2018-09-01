/* Example to reverse a sentence entered by user without using strings. */
/* keep hitting enter until full output displayed */

#include <stdio.h>
void Reverse();
int main()
{
    printf("Enter a sentence: ");
    Reverse();
    return 0;
}
void Reverse()
{
    char c;
    scanf("%c",&c);
    if( c != '\n')
    {
        Reverse();
        printf("%c",c);    
    }
    
    getch();
    return(0);
}
