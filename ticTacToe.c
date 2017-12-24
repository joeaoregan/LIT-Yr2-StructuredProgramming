#include <stdio.h>

int grid[3][3]={1,2,3,4,5,6,7,8,9};											// function 1			original grid
int input, player;															// function 2, 3, 4
char arrOutput[3][3]={'1','2','3','4','5','6','7','8','9'};					// function 4, 5 		edited grid
int check1to9,checkXorO;													// function 3, 4
int gameOver=0;																// function 2, 6
    
int main() {
	char exit = 'n';
	
	while (exit != 'x') {
		printf("Tic Tac Toe\n\nPlayer 1 = X\nPlayer 2 = O\n\n");
		
	    printGrid();														// print original integer grid
		playGame();															// until gameOver changes to 1
		
		printf("\n\nContinue? Press x to exit\n");
		
		//scanf("%c",exit);
		exit = getc(stdin);
	} 
	
    return(0);
} // main

// Function 1: print original grid
printGrid() {  
	int x, y;
    printf("Select Position On Grid:\n");
 
	for(x=0;x<3;++x)  {
		for(y=0;y<3;++y) {
			printf("%d ",grid[x][y]);			
			if (y<2)printf("| ");
		} // y
		
		if(x<2)printf("\n__________\n");
	} // x
}

// Function 2: play game
playGame() {
	int round=0;
	
	while(gameOver!=1) {													// ERROR: goes to round 4 for player 2 - while(round<5)
		printf("\n\nROUND %d:\n",round+1);
		player = 1;
		 	
		while(player < 3) {
			winnerTest(); 													// ERROR: goes to already x or o
			
			if((gameOver != 1) && (player < 3)) {
				printf("\nPlayer %d: please select postion 1-9: ",player);
				scanf(" %d",&input);
				
				checkInput1to9();											// Check input and display the grid
				++player;
			} 															// replace previous bracket -- still goes to round 4 before exit
		}		 
		++round;
	}	// round
}	// funct

// Function 3: Check if user input is 1 to 9
checkInput1to9() {
	int x,y;
	
	for(x=0;x<3;++x) {
		for(y=0;y<3;++y) {
			if (input==grid[x][y]) {
			checkInputXorO();												// test for already x or o
			check1to9=1;
			}
		}	//y
	}	//x
	
	if((check1to9==1) && (checkXorO==1)) {
		editGrid();															// Display edited grid
	} else  {
		printf("Between 1 to 9!!! Try Again");
		--player;					 										// RESET THE PLAYERS MOVE!!!!!!
	}
}

// Function 4: Check if X or O already
checkInputXorO() {
	int x,y;
	
	for(x=0;x<3;++x) {
		for(y=0;y<3;++y) {
			if (input==grid[x][y])  {
				if(arrOutput[x][y] == 'X' || arrOutput[x][y] == 'O') {		// If the position in the grid already taken
					printf("\nAlready %c - Please Try Again\n", arrOutput[x][y]);
					--player;												// Take the turn again
				} 
				else checkXorO=1;											// ok to proceed
			}
		}
	}
}

// Function 5: Output the Grid
editGrid() {
	int i,j;
		  
	for(i=0;i<3;++i) {
		for(j=0;j<3;++j) {			
			if (input == grid[i][j]) {
				if(player==1)arrOutput[i][j]='X'; 							// player 1 = X
				if(player==2)arrOutput[i][j]='O'; 							// player 2 = O
			}
			printf("%c ",arrOutput[i][j]);
			if (j < 2) printf("| ");
		}
		
		(i < 2) ? printf("\n__________\n") : printf("\n");					// Line separating rows, or new line
	}
}

// Function 6: Check Winner
winnerTest() {
	int i,j,winner = 0;
	
	for(i = 0; i < 3; ++i) {																								// Check rows
		for(j=0;j<3;++j) {
			// Check rows, columns, and diagonals for match
			if (arrOutput[0][0] == arrOutput[0][1] && arrOutput[0][1] == arrOutput[0][2]) winner = arrOutput[0][0]; 		// 123	
			else if (arrOutput[1][0] == arrOutput[1][1] && arrOutput[1][1] == arrOutput[1][2]) winner = arrOutput[1][0]; 	// 456
			else if (arrOutput[2][0] == arrOutput[2][1] && arrOutput[2][1] == arrOutput[2][2]) winner = arrOutput[2][0]; 	// 789
			else if (arrOutput[0][0] == arrOutput[1][0] && arrOutput[1][0] == arrOutput[2][0]) winner = arrOutput[0][0]; 	// 147
			else if (arrOutput[0][1] == arrOutput[1][1] && arrOutput[1][1] == arrOutput[2][1]) winner = arrOutput[0][1]; 	// 258
			else if (arrOutput[0][2] == arrOutput[1][2] && arrOutput[1][2] == arrOutput[2][2]) winner = arrOutput[0][2]; 	// 369
			else if (arrOutput[0][0] == arrOutput[1][1] && arrOutput[1][1] == arrOutput[2][2]) winner = arrOutput[0][0]; 	// 159
			else if (arrOutput[0][2] == arrOutput[1][1] && arrOutput[1][1] == arrOutput[2][0]) winner = arrOutput[0][2]; 	// 357
		}	// j
	}	// i
	
	if(winner != 0) {
		if (winner == 'X') printf("\n\nGAME OVER\nPlayer 1 Is The Winner");
		else printf("\n\nGAME OVER\nPlayer 2 Is The Winner");
			
		player += 2;		// terminate player 1 or 2 turn loop
		gameOver = 1;		// terminate rounds loop
	}
}
