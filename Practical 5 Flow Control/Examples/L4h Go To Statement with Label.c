// Go to example

#include <stdio.h>
int main()
{
    float x = 0;
    
    printf("Enter a Number\n");
    scanf("%f",&x);
    
    while(x<100)
    {
      if (x<0)
       goto errorcheck;                 
      scanf("%f",&x);
    } // end of while loop
    
    errorcheck: // label
    {                  
      printf("ERROR NEGATIVE VALUE FOR X\n");
    }
    
    printf("End of Program\n");
     getch();
    return 0;}
