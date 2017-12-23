#include <stdio.h>


    //char grid[3][3]={'1','2','3','4','5','6','7','8','9'};		// function 1
    int grid[3][3]={1,2,3,4,5,6,7,8,9};								// function 1			original grid
    int input; 														// function 2, 3, 4
    int player;														// function 2, 3, 4
    char arrOutput[3][3]={'1','2','3','4','5','6','7','8','9'};		// function 4, 5 		edited grid
    int check1to9,checkXorO;										// function 3, 4
    int gameOver=0;													// function 2, 6
    
    
main()
{
	char exit;
	
	//do
	//{
	printf("Tic Tac Toe\n");
	printf("\nPlayer 1 = X\n");
	printf("Player 2 = O\n\n");
	
    printGrid();					// print original integer grid
	roundCount();					// until gameOver changes to 1
	
	//printf("\n\nContinue? Press x to exit\n");
	//scanf(" %c",exit);
	//}
	//while(exit!='x');
	
	getch();
    return(0);
} // main

/*****************************************************/
//			Function 1: print original grid
/*****************************************************/

printGrid()
{  
	int x,y;

    printf("Select Position On Grid:\n");
 
    for(x=0;x<3;++x)
     {
      for(y=0;y<3;++y)
      {
       printf("%d ",grid[x][y]);
      	   
	   if (y<2)printf("| ");
      } // y
      if(x<2)printf("\n__________\n");
     } // x
}

/*****************************************************/
//				Function 2: Round Counter
/*****************************************************/

roundCount()
{
	int round=0;
	
	while(gameOver!=1)	
	{
	 printf("\n\nROUND %d:\n",round+1);
	 player=1;
	 	
	 playerTurn();
     ++round;
	}	// round
}		// funct

/*****************************************************/
//				Function 3: Player Turn
/*****************************************************/

playerTurn()
{
	while((gameOver!=1)&&(player<3))					// player 2 goes to round 4
	{
	 winnerTest(); 										// needs to be here				
	  
	 //if((gameOver!=1) && (player < 3))
	 //{	  
	  printf("\nPlayer %d: please select postion 1-9: ",player);
	  scanf(" %d",&input);
	  
	  checkInput1to9();
	  ++player;
	 //}
	}
}		// funct

/*****************************************************/
//		Function 4: Check if user input is 1 to 9
/*****************************************************/

checkInput1to9()
{
	int x,y;
	
	for(x=0;x<3;++x)
	{
	 for(y=0;y<3;++y)
	 {
	  if (input==grid[x][y])
	  {
	  	checkInputXorO();		// test for already x or o
		check1to9=1;
	  }
	 }	//y
	}	//x
	
	if((check1to9==1)&&(checkXorO==1))
	{
	 editGrid();
	}
	else 
	{
	 printf("Between 1 to 9!!! Try Again");
	  --player;					 // RESET THE PLAYERS MOVE!!!!!!
	}
}

/*****************************************************/
//		Function 5: Check if X or O already
/*****************************************************/

checkInputXorO()
{
	int x,y;
	
	for(x=0;x<3;++x)
	{
	 for(y=0;y<3;++y)
	 {
	  if (input==grid[x][y]) 	
	  {
		if(arrOutput[x][y]=='X')
		{
		 printf("\nAlready X - Please Try Again\n");
		 --player;
		}
		else checkXorO=1;								// ok to proceed
		
	  	if(arrOutput[x][y]=='O')
		{
		 printf("\nAlready O - Please Try Again\n");
		 --player;
		}
		else checkXorO=1;								// ok to proceed
	  }
	 }	//y
	}	//x
}

/*****************************************************/
//			Function 6: Output the Grid
/*****************************************************/

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
		 if(player==1)arrOutput[i][j]='X';				 // player 1 = X
		 if(player==2)arrOutput[i][j]='O'; 				// player 2 = O
	    }
	    printf("%c ",arrOutput[i][j]);
        if (j<2) printf("| ");
	   } // j
	  if(i<2)printf("\n__________\n");
	  else printf("\n");
	 }	// i
}		// funct

/*****************************************************/
//				Function 7: Check Winner
/*****************************************************/

winnerTest()
{
	int i,j,winner;
	
	//check rows
	for(i=0;i<3;++i)
	{
	 for(j=0;j<3;++j)
	 {
	  // Player 1
	  // rows
	  if((arrOutput[0][0]=='X') && (arrOutput[0][1]=='X') && (arrOutput[0][2]=='X')) winner=1; // 123
	  if((arrOutput[1][0]=='X') && (arrOutput[1][1]=='X') && (arrOutput[1][2]=='X')) winner=1; // 456
	  if((arrOutput[2][0]=='X') && (arrOutput[2][1]=='X') && (arrOutput[2][2]=='X')) winner=1; // 789
	  // columns
	  if((arrOutput[0][0]=='X') && (arrOutput[1][0]=='X') && (arrOutput[2][0]=='X')) winner=1; // 147
	  if((arrOutput[0][1]=='X') && (arrOutput[1][1]=='X') && (arrOutput[2][1]=='X')) winner=1; // 258
	  if((arrOutput[0][2]=='X') && (arrOutput[1][2]=='X') && (arrOutput[2][2]=='X')) winner=1; // 369
	  // diagonals
	  if((arrOutput[0][0]=='X') && (arrOutput[1][1]=='X') && (arrOutput[2][2]=='X')) winner=1; // 159
	  if((arrOutput[0][2]=='X') && (arrOutput[1][1]=='X') && (arrOutput[2][0]=='X')) winner=1; // 357
	  
	  // Player 2
	  // rows
	  if((arrOutput[0][0]=='O') && (arrOutput[0][1]=='O') && (arrOutput[0][2]=='O')) winner=2; // 123
	  if((arrOutput[1][0]=='O') && (arrOutput[1][1]=='O') && (arrOutput[1][2]=='O')) winner=2; // 456
	  if((arrOutput[2][0]=='O') && (arrOutput[2][1]=='O') && (arrOutput[2][2]=='O')) winner=2; // 789
	  // columns
	  if((arrOutput[0][0]=='O') && (arrOutput[1][0]=='O') && (arrOutput[2][0]=='O')) winner=2; // 147
	  if((arrOutput[0][1]=='O') && (arrOutput[1][1]=='O') && (arrOutput[2][1]=='O')) winner=2; // 258
	  if((arrOutput[0][2]=='O') && (arrOutput[1][2]=='O') && (arrOutput[2][2]=='O')) winner=2; // 369
	  // diagonals
	  if((arrOutput[0][0]=='O') && (arrOutput[1][1]=='O') && (arrOutput[2][2]=='O')) winner=2; // 159
	  if((arrOutput[0][2]=='O') && (arrOutput[1][1]=='O') && (arrOutput[2][0]=='O')) winner=2; // 357
	 }	// j
	}	// i
	
	if(winner==1)
	{
	 printf("\n\nGAME OVER\nPlayer 1 Is The Winner");
	 player+=2;		// terminate player 1 or 2 turn loop
	 gameOver=1;	// terminate rounds loop
	}	
	if(winner==2)
	{
	 printf("\n\nGAME OVER\nPlayer 2 Is The Winner");
	 player+=2;
	 gameOver=1;
	}	
}
