/*
password
*/
#include <stdio.h>
#include <string.h>

	char password[15];
	char verify[15];
	
	int j=1;
	
int main ()
{
	int i;
	printf("Enter Password: ");
	gets(password);
	//for(i=0;i<3;++i) 
	verifyPassword();
	
    printf("\n%s:%d elements",password,sizeof(password));
 	printf("\n:%d characters\n",strlen(password)); 
	printf("\n%s:%d elements",password,sizeof(verify));
 	printf("\n:%d characters\n",strlen(verify));
   
   getch();
   return(0);
}
verifyPassword()
{
	
	printf("Attempt %d of 3 Verify Password: ",j);
	gets(verify);
	
	if(strcmp(password,verify)==NULL) printf("\nThe Passwords Match");
 	else 
 	{
	 printf("\nThe Passwords Do Not Match");
	 if(j<3) 
	 {
	  j++;
	  printf("\nPlease Try Again\n");
	  verifyPassword(); 
	 }
	}
}
