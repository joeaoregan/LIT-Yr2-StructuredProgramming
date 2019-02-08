#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strreverse(char *string);

int main(int argc, char *argv[])
{
  char str[256];
  printf("Type a String to reverse it.[max. 255 chars]\n");
  fgets(str, 255, stdin);
  strreverse(&str[0]);
  printf("%s", str);
  return EXIT_SUCCESS;
}

void strreverse(char *string)
{
 int i, len;
 char c;
 len=strlen(string);
 char string2[len+1];

 for(i=0; i<len; i++)
 {
  c=string[i];
  string2[len-i]=c;

 }
 string2[len+1]='\0';
 string=string2;
 //printf("%s\n", string); <-- this would work,but should be in main

}
