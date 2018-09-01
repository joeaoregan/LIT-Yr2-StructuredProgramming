#include <stdio.h>

main()
{
   char msg1[]="hello";
   char msg2[6]="hello";
   char msg3[6]={'h','e','l','l','o'};
   char *msg4="hello"; // points to 1st character in hello
   
   printf("string 1 %s\n",msg1);
   printf("string 2 %s\n",msg2);
   printf("string 3 %s\n",msg3);
   printf("string 4 %s\n",msg4);
   
   printf("string 1 %s size of array %d\n",msg1,sizeof(msg1));
   printf("string 2 %s size of array %d\n",msg2,sizeof(msg2));
   printf("string 3 %s size of array %d\n",msg3,sizeof(msg3));
   printf("string 4 %s size of array %d\n",msg4,sizeof(msg4)); 
   
   printf("string 1 %s Characters %d\n",msg1,strlen(msg1));
   printf("string 2 %s Characters %d\n",msg2,strlen(msg2));
   printf("string 3 %s Characters %d\n",msg3,strlen(msg3));
   printf("string 4 %s Characters %d\n",msg4,strlen(msg4));
   
   
getch();
return(0);
}
