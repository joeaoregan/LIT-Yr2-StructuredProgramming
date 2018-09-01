#include <stdio.h>
main()
{
char colour[3]="Orange";

printf("size is %d\n", (int)sizeof(colour));
printf("%s\n",colour);      //see note

printf("first element is %c\n", colour[0]);
printf("second element is %c\n", colour[1]);
printf("third element is %c\n", colour[2]);
printf("fourth element is %c\n", colour[3]);  // does not print to screen NULL

	getch();
	return(0);
} // main


