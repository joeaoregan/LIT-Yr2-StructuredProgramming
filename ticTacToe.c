#include <stdio.h>


    //char grid[3][3]={'1','2','3','4','5','6','7','8','9'};		// function 1
    int grid[3][3]={1,2,3,4,5,6,7,8,9};								// function 1
    int input; 														// function 2, 3, 4
    int player;														// function 2, 3, 4
    char arrOutput[3][3]={'1','2','3','4','5','6','7','8','9'};	// function 4, edited grid
    
main()
{
    printGrid();
	playGame();  // Goes through 5 rounds
	
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
       printf("%d ",grid[x][y]); //changed to int
      	   
	   if (y<2)printf("| ");
      } // y
      if(x<2)printf("\n__________\n");
     } // x
}
/*****************************************************/

// function 2: play game
playGame()
{
	int round;
	
	for(round=0;round<=5;++round) // rounds loop
	{
	 printf("\n\nROUND %d:\n",round+1);
	 player=1;
	 //for(player=1;player<=2;++player) // Player goes
	 
	 do
	 {
	  printf("\nPlayer %d: please select postion 1-9: ",player);
	  scanf(" %d",&input);											// scan as int ***
	  
	  checkInput1to9();
	  ++player;
	 }	// player go
     while(player<3);
     
	}	// round
}		// funct

// Function 3: Check User Input
checkInput1to9()
{
	int x,y;
	int checkAvailable;
	
	for(x=0;x<3;++x)
	{
	 for(y=0;y<3;++y)
	 {
	  if (input==grid[x][y]) 		// test for already x or o - if(arrOuput[x][y]=='X'
	  {
	   checkAvailable=1;
	  }
	 }	//y
	}	//x
	
	if(checkAvailable==1) 
	{
	 //printf("\noutput grid %c",[char]user);
	 editGrid();
	}
	else 
	{
	 printf("Between 1 to 9!!! Try Again");
	  --player;					 // RESET THE PLAYERS MOVE!!!!!!
	}	
}

// Function 4: Output the Grid
editGrid()
{
	int i,j;
		  
	 for(i=0;i<3;++i)
	 {
	  for(j=0;j<3;++j)
	  {
	  	//printf("%c",input);
	  	
	   if (input==grid[i][j])
		{
		 if(player==1)arrOutput[i][j]='O'; // player 1 = O
		 if(player==2)arrOutput[i][j]='X'; // player 2 = X
	    }
	    printf("%c ",arrOutput[i][j]);
        if (j<2) printf("| ");
	   } // j
	  if(i<2)printf("\n__________\n");
	  else printf("\n");
	 }	// i
}		// funct

