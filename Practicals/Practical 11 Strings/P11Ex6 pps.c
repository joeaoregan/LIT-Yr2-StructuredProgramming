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
 
 char a[]="A";
 char b[]="B";
 char k[]="K";
 char r[]="R";
 
 printf("Please Enter PPS Number: ");
 gets(pps);
 
 strncpy(num,pps,9);
 
 printf("PPS: %s",pps);
 //printf("\nnumeric part: %s",num);
 printf("\nCatergory: %c",pps[9]);

 if(strstr(pps,a)!=NULL) printf("\nTax Free Allowance: 3330");
 else if(strstr(pps,b)!=NULL) printf("\nTax Free Allowance: 2670");
 else if(strstr(pps,k)!=NULL) printf("\nTax Free Allowance: 3130");
 else if(strstr(pps,r)!=NULL) printf("\nTax Free Allowance: 0");
 else printf("\n%s Not a valid category",pps+9);
 
 getch();
 return(0);
}
