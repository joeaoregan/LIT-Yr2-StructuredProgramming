#include <stdio.h>
main()
{
	char colour[]="Red";
	
	printf("size is %d\n",(int)sizeof(colour));
	
	printf("first element is %c\n",colour[0]);
	printf("second element is %c\n",colour[1]);
	printf("third element is %c\n",colour[2]);
	printf("fourth element is %c\n",colour[3]); // does not print to screen
	
	getch();
	return(0);
} // main


