#include <stdio.h>


main()
{
 char *arr[4]= {"tom", "paddy", "john", "Brian"};			/*pointer to a float*/
 char *(*ptr)[4] = &arr;
 int i=0;
 
for(i=0;i<4;i++)
    printf("Address of String %s : %u\n",arr[i],&arr[i]);

for(i=0;i<4;i++)
    printf("Address of String %d : %u\n",i+1,(*ptr)[i]);

getch();
return 0;
}
 
