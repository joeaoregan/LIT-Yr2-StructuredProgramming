// slide 16

#include <stdio.h>

int main(){
	int  date1[]={21,11,2013};
	int  * date2;

	date2=date1;
	
    
    printf("date1: %d-%d-%d\n", date1[0],date1[1],date1[2]);
    printf("date2: %d-%d-%d\n", date2[0],date2[1],date2[2]);

    getch();
	return (0);
}

