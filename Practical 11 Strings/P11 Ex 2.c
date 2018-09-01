#include <stdio.h>
#include <string.h>

int main()
{ 
 calclength();
 
 getch();
 return(0);

}
calclength()
{       
 int i,size=0;
 char arrStr[] = "Joe";  //string length 15
 
 for(i=1;i<sizeof(arrStr);++i)
 {
  size++;
 }
 printf("Lenght of String %s is %d",arrStr,size);
}
