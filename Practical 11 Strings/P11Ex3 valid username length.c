#include <stdio.h>

int main()
{
 char userName[51];
 
 printf("Enter User Name:\n");
 gets(userName);
 
 validusername(userName);
 
 getch();
 return(0);

}
validusername(char y[])
{
 printf("Length Of Username Is %d\n",strlen(y));  
 if(strlen(y)<10)printf("The Username needs to be 10 Characters Long"); 
 if(strlen(y)>=10)printf("This Is A Valid Username Length");        
}
