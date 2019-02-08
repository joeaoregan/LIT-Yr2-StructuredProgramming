/* 
 Joe O'Regan
 19-11-2015
*/

#include <stdio.h>
#include <string.h>

main()
{
 char welcome[]="Welcome to C Programming";
 int i,count=0;
 
 printf("Number of characters in string: %d",strlen(welcome));
 
// for(i=0;i<=strlen(welcome);++i)
 for(i=0;i<24;++i)
 {
 //if((welcome[i]!="a")||(welcome[i]!="e")||(welcome[i]!="i")||(welcome[i]!="o")||(welcome[i]!="u"))
 if((welcome[i]!='a')&&(welcome[i]!='e')&&(welcome[i]!='i')&&(welcome[i]!='o')&&(welcome[i]!='u'))
 //if(welcome[i]!=('e'&&'o'))
 count++;
}
printf("\nNumber of consonants: %d",count);
 
 
 getch();
 return(0);
}
