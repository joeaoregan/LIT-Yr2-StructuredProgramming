/* This program asks user to enter a string and a character
   and this program checks how many times that character is repeated 
   in the string entered by user */

#include <stdio.h>
int main(){
   char c[1000],ch;
   int i,count=0;
   printf("Enter a string: ");
   gets(c);
   printf("Enter a character to find frequency: ");
   scanf("%c",&ch);
   for(i=0;c[i]!='\0';++i)
   {
       if(ch==c[i])
           ++count;
   }
   printf("Frequency of %c = %d", ch, count);

    getch();
    return(0);
}
