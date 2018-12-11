#include<stdio.h>
enum colors{black,red,orange,green,blue};

int main()
{
 enum colors{black=1,red,orange,green,blue};

 enum colors foreground;
 enum colors background;
 
 foreground = black;
 background = red;
  
 printf("\nThe Foreground color is %d",foreground);
 printf("\nThe background color is %d",background);


getch();
return(0);
}

