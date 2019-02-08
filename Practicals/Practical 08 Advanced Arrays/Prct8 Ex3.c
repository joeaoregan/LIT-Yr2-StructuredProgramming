/* Practical 8: Advanced Arrays 
   Exercise 3 */

/* Joe O'Regan */
/* 19-10-2015 */

#include<stdio.h>

#define ROWS 3
#define COLUMNS 4

int z[ROWS][COLUMNS]={1,2,3,4,5,6,7,8,9,10,11,12};

main()
{
    int a,b,c=999
	;
    for(a=0;a<ROWS;++a)
    for (b=0;b<COLUMNS;++b)
    	printf("\na:%d b:%d z:%d",a,b,z[a][b]);
    	
    	//printf("\n\n%d",z[a][b]); // z outside main?
    	
    	if(z[a][b] < c) c = z[a][b];
     printf("\n%d",c);
    
    getch();
    return(0);
 } // end of main
      
