#include<stdio.h>

main()
{
    int user;
    char grid[3][3]={'1','2','3','4','5','6','7','8','9'};
    
    printGrid();
	playGame();

    getch();
    return(0);
} // main

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
	int l=0;
	
	for(l=1;l<=5;++l) // rounds loop
	{
	 printf("\n\nROUND %d:\n",l);
	 editGrid();
	}	// l
}		// funct

// Function 3: Edit Grid
editGrid()
{
	int i,j,k;
	char outputGrid[3][3]={'1','2','3','4','5','6','7','8','9'};
	char user;
	
	for(k=1;k<=2;++k) // Player goes
	{
	  printf("\nPlayer %d: please select postion 1-9: ",k);
	  scanf(" %c",&user);
	 for(i=0;i<3;++i)
	 {
	  for(j=0;j<3;++j)
	  {
	   if (user==outputGrid[i][j])
		{
		 if(k==1)outputGrid[i][j]='O'; // player 1 = O
		 if(k==2)outputGrid[i][j]='X'; // player 2 = X
	    }
	    printf("%c ",outputGrid[i][j]);
        if (j<2)printf("| ");
	   } // j
	  if(i<2)printf("\n__________\n");
	  else printf("\n");
	 }	// i
	}	// k
}		// funct
