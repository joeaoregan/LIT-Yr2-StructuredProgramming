#include <stdio.h>
#include <string.h>

 
int main()
{ 
 char arrStr[] = "String Variable";  //string length 15
 
 calclength(arrStr);
 //lengthfunct(arrStr);
 
 getch();
 return(0);

}
/*
lengthfunct(char x[])
{       
 int i,size=0;

 for(i=1;i<sizeof(x);++i)
 {
  size++;
 }
 
 printf("Size of String \"%s\" is %d\n",x,size);
}
*/
calclength(char y[])
{
 printf("Length of String is %d\n",strlen(y));           
}
