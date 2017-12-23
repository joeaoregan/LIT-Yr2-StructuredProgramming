#include<stdio.h>

//#define ROWS 3
//#define COLUMNS 3
//char printGrid();

main()
{
    printf("Please Select Postition From Grid\n");
    printGrid();
    gameRound();

    getch();
    return(0);
 } // end of main


// function 1: Print Intitial Grid
printGrid()
{  
int x,y;

	char grid[3][3]={'1','2','3','4','5','6','7','8','9'};
 
    for(x=0;x<3;++x)
    {
     for(y=0;y<3;++y)
     {
      printf("%c ",grid[x][y]);
	  if (y<2)printf("| ");
     }
     if(x<2)printf("\n__________\n");
    }
}

// Function 2: Game Rounds
gameRound()
{
	int r; // count up to 5 rounds
	for(r=1;r<=5;++r)
	{
	printf("\n\nROUND %d:\n",r);
	playerGoes();
	}
}

// Function 3: Player Goes
playerGoes()
{
	int x=0,y=0,z=0;
	char user;
	
	for(z=1;z<=2;++z) // Count for 2 players
  	{
     printf("\nPlayer %d: please select postion 1-9: ",z);
     scanf(" %c",&user);
     printGrid(); // --- swap with edited grid
	}
}

// Function 4: Edit Grid
editGrid()
{  
int x,y;
	char input;
	char outputGrid[3][3]={'1','2','3','4','5','6','7','8','9'};
 
    for(x=0;x<3;++x)
    {
     for(y=0;y<3;++y)
     {
    	playerGoes();
      if (input==outputGrid[x][y])
      {
       outputGrid[x][y]='X';
      }
      printf("%c ",ouputGrid[x][y]);
	  if (y<2)printf("| ");
     }
     if(x<2)printf("\n__________\n");
    }
}

/*
    for(i=0;i<3;++i)
    {
    
     for(j=0;j<3;++j)
     {
      if (user==grid[i][j])
      {
       outputGrid[i][j]='X';
      }
     //printf("%c ",outputGrid[i][j]);
    // }
     //printf("\n");
    //}
    */
