/*
password
*/
#include <stdio.h>
#include <string.h>

    //char password[15];
	char password[15]="password";
	char verify[15];
	
	int j=1;
	
int main ()
{
	int i;
	//enterPassword();
	verifyPassword();
	changePassword();
	
    printf("\n%s:%d elements",password,sizeof(password));
 	printf("\n:%d characters\n",strlen(password)); 
	printf("\n%s:%d elements",password,sizeof(verify));
 	printf("\n:%d characters\n",strlen(verify));
   
   getch();
   return(0);
}
/*
enterPassword()
{
	printf("Enter Password: ");
	gets(password);
}
*/
verifyPassword()
{
	
	printf("Attempt %d of 3 Verify Password: ",j);
	gets(verify);
	
	if(strcmp(password,verify)==NULL) 
     printf("\nThe Passwords Match");
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
	//printf("\n\nj - %d",j);               // repeats 3 times
	// if(j>3) changePassword();
}

changePassword()
{
 char newPassword[15];
 char change;
 
 printf("\nWould you like to change the password? \nEnter 'y' for yes: ");
 scanf(" %c",&change);
 
 if (change=='y')
 {
  printf("\nEnter New Password: ");
  scanf(" %s",&newPassword);                            // enter new password sting

  printf("\nPassword entered is %s",newPassword);       // display new password  string entered
                     
  strcpy(password,newPassword);
  printf("\nNew Password Is: %s",password);             // display overwritten password
 }
}
