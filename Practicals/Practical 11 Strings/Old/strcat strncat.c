/* 
 Joe O'Regan
 19-11-2015
*/

#include <stdio.h>
#include <string.h>

int main()
{
 char pps[]="123456789R";
 char num[9];
 //char alpha=pps+9;
 char alpha[10];
 const char a="A";
 char b="B";
 char k[]="K";
 char r="R";
 
 strncat(alpha,(pps+8),10);
 
 strncpy(num,pps,9);
 
 printf("pps: %s",pps);
 printf("\nnumeric part: %s",num);
// printf("\nalpha part: %c",alpha);
 printf("\nalpha part: %s",pps+9);

 //if(strchr(pps,a)!=NULL) printf("\nTax Free Allowance: 3330");
 //if(strchr(pps,b)!=NULL) printf("\nTax Free Allowance: 2670");
 if(strstr(pps,k)!=NULL) printf("\nTax Free Allowance: 3130");
 if(strstr(pps,r)!=NULL) printf("\nTax Free Allowance: 0");
// if(strchr(pps,a)==NULL) 


 getch();
 return(0);
}
