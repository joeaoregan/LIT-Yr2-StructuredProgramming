#include<stdio.h>

//#define ROWS 3
//#define COLUMNS 3
//char printGrid();

main()
{
   
      
    int i=0,j=0;
	//int k=0,l=0;
    
    int user;
    char grid[3][3]={'1','2','3','4','5','6','7','8','9'};
    
    printGrid(i,j);

	gameRound();


    getch();
    return(0);
 } // end of main


// function 1: Print Grid
printGrid(int x, int y)
{  
	char grid[3][3]={'1','2','3','4','5','6','7','8','9'};

	printf("Select Position On Grid:\n");
 
    for(x=0;x<3;++x)
    {
     for(y=0;y<3;++y)
     {
      printf("%c ",grid[x][y]);
	  if (y<2)printf("| ");
     }
     if(x<2)printf("\n__________\n");
    }
     
} // end function


// Function 2: Game Rounds
gameRound()
{
	int r; // round counter
	for(r=1;r<=5;++r)
	{
	printf("\n\nROUND %d:\n",r);
	playerGoes();
	} // end of r
}

// Function 3: Player Goes
playerGoes()
{
	int x=0,y=0,z=0;
	char user;
	
	for(z=1;z<=2;++z) // Player goes
  	{
     
     printf("\nPlayer %d: please select postion 1-9: ",z);
     scanf(" %c",&user);
     
	}
    
} // end function

