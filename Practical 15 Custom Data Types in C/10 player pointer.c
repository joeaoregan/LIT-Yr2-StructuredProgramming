#include<stdio.h>

main()
{
      struct player{
      //char player[20];    // normal array
      char *player;         // pointer
      int level;
      int score;
      };
      
      struct player pl;
      char name[]="player";
      
      //strcpy(pl.player,"Player");      
      //strcpy(pl.player,name);
      pl.player = "Player Name";
      
      pl.level=1;
      pl.score=1000;
      
      printf("Player: \t%s",pl.player);
      printf("\nLevel: \t\t%d",pl.level);
      printf("\nScore: \t\t%d",pl.score);
  
      getch();
      return(0);
}
