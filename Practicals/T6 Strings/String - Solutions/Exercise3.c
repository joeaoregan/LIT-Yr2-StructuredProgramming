#include<stdio.h>
#include<string.h>

int main()
{
    char password_saved[]= "TopCat";
    
    char password_in[10];
    int login_count=0;
    do
    {
    /*Prints out the length of the String*/
    printf("\nPlease Enter Your Password.It should be less that 10 characters");
    scanf("%s",password_in);
    login_count=login_count+1;
     /*Comparing two Strings*/
    
    if(strcmpi(password_saved,password_in) == 0)
    {
     printf("\nLogin Successful!");
     login_count=3;
    }                              
    else
    {
     if(login_count==3)
     {
     printf("\nLogin Unsuccessful - System Locked");
     printf("\nPlease contact your system administrator!");
     }
     else
     {
     printf("\nLogin Unsuccessful - Please Try again!");
     }
    }                     
    }while(login_count<3);   
     
    getch();
    return(0);    
}    
