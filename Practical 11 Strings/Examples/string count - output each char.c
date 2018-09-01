/* Joe O'Regan */
/* 11-11-2015 */

#include<stdio.h>
main()
{
int i;
char input[]="Hello";

    for(i=0;i<strlen(input);i++)
    {
     printf("%c",input[i]);                            
    }
    getch();
    return(0);
}
