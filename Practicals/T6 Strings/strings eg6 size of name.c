#include <stdio.h>
#include <string.h>

int main()
{
 char name[]="Joe";
 char surname[]="O'Regan";
 
 //printf("\nEnter First Name");
 //gets(name);
 //printf("\nEnter Second Name");
 //gets(surname);
 
 printf("\nName: %s size: %d",name,sizeof(name));
 printf("\nName:%d characters\n",strlen(name));
 printf("\nSurname: %s size: %d",surname,sizeof(surname));
 printf("\nSurname:%d characters\n",strlen(surname));
 
 
 //strcpy(name,surname);
 //puts(name); puts(surname);
 
 strcpy(surname,name);
 puts(surname); puts(name);
 
 
 printf("\nName: %s size: %d",name,sizeof(name));
 printf("\nName:%d characters\n",strlen(name));
 
 getch();
 return(0);

}
