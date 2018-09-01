/*
password
*/
#include <stdio.h>
#include <string.h>

	char password[15];
	char verify[15];
	
int main ()
{
	int i;
	printf("Enter Password: ");
	gets(password);
	for(i=0;i<3;++i) verifyPassword();
	
    printf("\n%s:%d elements",password,sizeof(password));
 	printf("\n:%d characters\n",strlen(password)); 
	printf("\n%s:%d elements",password,sizeof(verify));
 	printf("\n:%d characters\n",strlen(verify));
   
   getch();
   return(0);
}
verifyPassword()
{
	
	printf("Verify Password: ");
	gets(verify);
	
	if(strcmp(password,verify)==NULL) printf("\nThe Passwords Match");
 	else 
 	{
	 printf("\nThe Passwords Do Not Match");
	 printf("\nPlease Try Again\n");
	 //verifyPassword();
	}
}
