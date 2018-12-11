#include <stdio.h>
main()
{
char colour[4]="Red";
printf("size is %d\n", (int)sizeof(colour));

printf("first element is %d\n", colour[0]);
printf("second element is %d\n", colour[1]);
printf("third element is %d\n", colour[2]);
printf("fourth element is %d\n", colour[3]);

	getch();
	return(0);
} // main


