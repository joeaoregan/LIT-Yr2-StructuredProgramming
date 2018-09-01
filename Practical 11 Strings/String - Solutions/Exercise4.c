#include<stdio.h>
#include<string.h>

int main()
{
    char first_name[]= "Mary";
    char last_name[] = "Ryan";
    char first_name_copy[10];
    
    /*Prints out the length of the String*/
    int len=strlen(first_name);
    printf("\nThe length of the String is:%d",strlen(first_name));
    printf("\nThe length of the String is:%d",len);
    
    /*Copy a String*/
    printf("\nThis copies first_name into the first_name_copy :%s",strcpy(first_name_copy,first_name));
    
    /*Concatenating a String*/
    printf("\nThis concatenates the first_name and the last_name:%s",strcat(first_name,last_name));
    
    /*Viewing a substring*/
    printf("\nThis searches for a substring in the last_name:%s",strstr(last_name,"Ry"));
    
    /*Converting to uppercase*/
    printf("\nThis converts a string to uppercase:%s",strupr(last_name));
    
    /*Converting to lowercase*/
    printf("\nThis converts a string to lowercase:%s",strlwr(last_name));
    
    /*Comparing two Strings*/
    printf("\nThis compares two strings:%s",strcmp(last_name,last_name));
    
    if(strcmp(last_name,last_name) == 0)
    {
     printf("\nThese Strings are the same");
    }                              
    
    /*Comparing two Strings*/
    printf("\nThis compares two strings ignoring case:%s",strcmpi(last_name,"RYAN"));
    
    /*Reversing a Strings*/
    printf("\nThe reverses a string :%s",strrev(last_name));
    
     
    getch();
    return(0);
    
}    
