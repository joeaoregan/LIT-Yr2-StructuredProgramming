#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
  int i,x,y;
  char exit;
 
  srand(time(NULL)); //new
 
  printf("Random Dice Throws\n");
 
 // for (i=0;i<10;i++) 
  do
  {
    x = rand() % 6 + 1;
    y = rand() % 6 +1;
    printf("Dice 1: %d Dice 2: %d\n", x,y);
    
    if ((x==1)&&(y==1)) printf("\nSnake Eyes!!\n");
    if ((x+y)==7)printf("\nLucky Number Seven!!\n");
    
    printf("Roll Again?");
    scanf(" %c",&exit);
  }
  while(exit!='x');

 
  return 0;
}
