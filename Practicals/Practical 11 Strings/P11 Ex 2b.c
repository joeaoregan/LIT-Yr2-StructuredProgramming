#include <stdio.h>
#include <string.h>

 
int main()
{ 
 char arrStr[] = "String Variable";  //string length 15
 
 calclength(arrStr);
 
 getch();
 return(0);

}

calclength(char x[])
{       
 int i,size=0;

 
 for(i=1;i<sizeof(x);++i)
 {
  size++;
 }
 printf("Size of String %s is %d",x,size);
}
