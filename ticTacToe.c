#include <stdio.h>


    //char grid[3][3]={'1','2','3','4','5','6','7','8','9'};	// function 1
    int grid[3][3]={1,2,3,4,5,6,7,8,9};						// function 1
    int user; 												// function 2, 3
    int player;												// function 2, 3

main()
{
    printGrid();
	playGame();  // Goes through 5 rounds
	
	printf("\nUser: %c",user);
	
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

// function 2: play game
playGame()
{
	int round;
	player=1;
	
	for(round=0;round<=5;++round) // rounds loop
	{
	 printf("\n\nROUND %d:\n",round+1);
	 
	 //for(player=1;player<=2;++player) // Player goes
	 do
	 {
	  printf("\nPlayer %d: please select postion 1-9: ",player);
	  scanf(" %d",&user);											// scan as int ***
	  
	  checkInput();
	  ++player;
	 }	// player go
     while(player<3);
	}	// round
}		// funct

// Function 3: Check User Input
checkInput()
{
	int x,y;
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
	
	if(checkAvailable==1) 
	{
	 printf("Valid Move");
	 //editGrid();
	}
	else 
	{
	 printf("Between 1 to 9!!! Try Again");
	 --player;					 // RESET THE PLAYERS MOVE!!!!!!
	}	
}
