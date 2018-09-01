#include <stdio.h>

void process1(float f[]);
void process2(float *f);

main()
{
 	float z[100];
	process1(z);
	process2(z);
 	process2(&z[50]); 
 	
 	getch();
}

void process1(float f[]) // pass array - size unspecified
{
    …process1;
}

void process2(float *f)
{
    …process2;
}

