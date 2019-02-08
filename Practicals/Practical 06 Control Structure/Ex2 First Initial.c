/* Exercise 2: First Initial */

/* Joe O'Regan */
/* 09-10-2015 */

#include<stdio.h>
int main()
{
    char initial;
    //char reserved_initial='A';
    
    printf("Please Enter First Character Of Surname: ");
    scanf("%c",&initial);
    
    if ((initial>='A') && (initial<='M'))
    {
     printf("Please go to room 1564");
    }
	else
    {
     printf("Please go to room 2415");	
    }     
             
    getch();
    return(0);
 } // end of main
      
