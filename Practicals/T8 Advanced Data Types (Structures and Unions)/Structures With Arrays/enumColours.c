// enum Type
// used to simplify code
#include<stdio.h>
// global
enum colours{black,red,orange,green,blue};

int main()
{
enum colours{black=1,red,orange,green,blue};

enum colours foreground;
enum colours background;

foreground = black;
background = red;

printf("\nThe Foreground colour is %d",foreground);
printf("\nThe background colour is %d",background);

getch();
return(0);
}
