/*
Practical 11 Ex5 Password
*/
#include <stdio.h>
#include <string.h>


	
int main ()
{
	int i;
	char password[20];
	char verify[20];

	printf("Please Enter Password: ");
	scanf(" %c",&password);
	printf("\nPlease Confirm Password: ");
	//gets(verify);
	scanf(" %c",&verify);
	
	//for(i=0;i<3;++i)
	//{
		//confirmPassword();
	//}
	if(password==verify) printf("\nPasswords match");
   getch();
   return(0);
}
/*
confirmPassword()
{
	printf("\nPlease Confirm Password: ");
	gets(verify);
	
	if(verify==password) printf("\nPasswords match");
	//else printf("\nPasswords Do Not Match");
}
*/
