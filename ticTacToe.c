#include<stdio.h>
// global variables
	char user;
    char grid[3][3]={'1','2','3','4','5','6','7','8','9'};			// original grid
	//char outputGrid[3][3]={'1','2','3','4','5','6','7','8','9'};	// edited grid
	int player;
	
//void testUserInput(int k2,char testInput);
    
main()
{
    printGrid();
	//playGame();

    getch();
    return(0);
} // main

// function 1: print original grid
printGrid()
{  
	int x,y;

    printf("Select Position On Grid:\n");
 
    for(x=0;x<3;++x)
     {
      for(y=0;y<3;++y)
      {
       printf("%c ",grid[x][y]);
      	   
	   if (y<2)printf("| ");
      } // y
      if(x<2)printf("\n__________\n");
     } // x
}
/*
// function 2: play game
playGame()
{
	int player=0,round;
	
	for(round=0;round<=5;++round) // rounds loop
	{
	 printf("\n\nROUND %d:\n",round);
	 for(player=1;player<=2;++player) // Player goes
	 {
	  printf("\nPlayer %d: please select postion 1-9: ",player);
	  scanf(" %c",&user);
	  
	 // checkInput(); // **************test Input Function
	  
     }	// k
	}	// l
}		// funct

// Function 3: Edit Grid
editGrid()
{
	int i,j;
		  
	 for(i=0;i<3;++i)
	 {
	  for(j=0;j<3;++j)
	  {
	   if (user==outputGrid[i][j])
		{
		 if(player==1)outputGrid[i][j]='O'; // player 1 = O
		 if(player==2)outputGrid[i][j]='X'; // player 2 = X
	    }
	    printf("%c ",outputGrid[i][j]);
        if (j<2) printf("| ");
	   } // j
	  if(i<2)printf("\n__________\n");
	  else printf("\n");
	 }	// i
}		// funct

// Function 4: Check User Input
checkInput()
{
	int x,y,temp;
	int checkAvailable;
	
	for(x=0;x<3;++x)
	{
	 for(y=0;y<3;++y)
	 {
	  if (user==grid[x][y]) 
	  {
	   checkAvailable=1;
	  }
	 }	//y
	}	//x
	
	if(temp==1) 
	{
	 printf("Valid Move");
	 //editGrid();
	}
	else 
	{
	 printf("invalid move");
	}	
}
*/
