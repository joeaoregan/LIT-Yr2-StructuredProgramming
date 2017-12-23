#include<stdio.h>

//#define ROWS 3
//#define COLUMNS 3
//char printGrid();

main()
{
   
      
    int i=0,j=0,k=0,l=0;
    
    int user;
    char grid[3][3]={'1','2','3','4','5','6','7','8','9'};
    
    printGrid();
	playGame();

    getch();
    return(0);
 } // end of main

// function 1: print original grid
printGrid()
{  
int x,y;
 char grid[3][3]={'1','2','3','4','5','6','7','8','9'};

    printf("Select Position On Grid:\n");
 
    for(x=0;x<3;++x)
     {
	  //if(x<3)printf("_ _ _"); // test grid
      for(y=0;y<3;++y)
      {
       printf("%c ",grid[x][y]);
      	   
	   if (y<2)printf("| ");
      } // y
      if(x<2)printf("\n__________\n");
     } // x
}

// function 2: play game
playGame()
{
 for(l=1;l<=5;++l) // rounds loop
 {
  printf("\n\nROUND %d:\n",l);
	
  for(k=1;k<=2;++k) // Player goes
  {
   printf("\nPlayer %d: please select postion 1-9: ",k);
   scanf(" %c",&user);
    
   for(i=0;i<3;++i)
    {
     for(j=0;j<3;++j)
     {
      if (user==grid[i][j])
      {
       if(k==1)grid[i][j]='O'; // player 1 = O
       if(k==2)grid[i][j]='X'; // player 2 = X
      }
     printf("%c ",grid[i][j]);
     if (j<2)printf("| ");
     } // j
    if(i<2)printf("\n__________\n");
    else printf("\n");
    } // i
   }  // k
 } 	   // l
} // funct
