#include <stdio.h>
#include <string.h>
//char calclength(char x[]);
 
int main()
{ 
 char arrStr[] = "String Variable";  //string length 15
 char * str;
 str=arrStr;
 
 printf("arrStr: %s\n",arrStr);
 printf("sizeof arrStr: %d\n",sizeof(arrStr));
 printf("strlen arrStr: %d\n\n",strlen(arrStr));
 
 printf("str: %s\n",str);
 printf("sizeof str: %d\n",sizeof(str));
 printf("strlen str: %d\n\n",strlen(str));
  
  calclength(str);

  //int i,size=0;

 getch();
 return(0);
}

calclength(char x[])
{       
 int i,size=0;
 
 //for(i=1;i<sizeof(x);++i) - sizeof(x) gives 7 - should be 15
 for(i=0;i!=("/0");++i)
 {
  size++;
 }
 printf("Size of String %s is %d",x,size);
}
