// slide 24

#include <stdio.h>
#include <string.h>

int main()
{
 char str[]="No Time Like the Present";
 char sub[]="Time";

 if(strstr(str,sub)==NULL){
 printf("Substring \"Time\" Not Found\n");
 } 						  
 else {
 printf("Substring \"Time\" Found at %p\n",strstr(str,sub));
 printf("Element Index Number %d\n\n",strstr(str,sub)-str);
 //printf("Element Index Number %d\n\n",strstr(str,sub));
 } 	 
 //printf("\n\n%s Versus Time: %d\n",sub,strcmp(sub,"Time"));
 //printf("\n\n%s Versus time: %d\n",sub,strcmp(sub,"time"));
 //printf("\n\n%s Versus TIME: %d\n",sub,strcmp(sub,"TIME"));
 char blah[] = "test\r\ntest";
 printf("test: %d", strstr(blah,"\r\n")-blah);


 getch();
 return(0);
}
