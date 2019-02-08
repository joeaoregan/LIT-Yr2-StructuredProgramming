#include <stdio.h>
#include <string.h>

int main()
{
 char arrWel[] = "Welcome";
 
 printf("string = %s size = %d",arrWel,sizeof(arrWel));
 printf("\ncharaceters: %d \n",strlen(arrWel));
 
 getch();
 return(0);

}
