#include <stdio.h>
#include <string.h>

 
int main( )
{
	enum suit{club=10, diamonds=11, hearts=20, spades=3};

	printf( "The value of club is %d\n", club);
	printf( "The value of diamonds is %d\n", diamonds);
	printf( "The value of hearts is %d\n", hearts);
	printf( "The value of spades is %d\n", spades);

	getch();
	return(0);
}
