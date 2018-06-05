/*
	Joe O'Regan
	K00203642
	
	Games Design and Development
	Year 2
	
	TicTacToe game in C with coloured text
*/

#if defined _WIN32 || defined _WIN64
#include <stdio.h>
#include <windows.h>   											// WinApi header for coloured text
#endif

#define NORM  15
#define BLUE   9
#define GREEN 10
#define CYAN  11
#define RED   12

// Function prototypes
void playGame();
void displayGrid(int playerMove);
void reset();

HANDLE  hConsole;											// Format output for Windows command prompt

int player;												// Which players turn
int grid[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};								// original grid
char arrOutput[3][3] = {'1','2','3','4','5','6','7','8','9'};						// edited grid
    
int main() {
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);							// Standard output device
	char *str;
	char input = 'n';
	
	while (input != 'x') {
		SetConsoleTextAttribute(hConsole, CYAN);
		printf("Tic Tac Toe\n\nPlayer 1 = X\nPlayer 2 = O\n\n");
		SetConsoleTextAttribute(hConsole, NORM);
		
		displayGrid(0);										// print original integer grid
		playGame();										// until gameOver changes to 1
		
		printf("\n\nContinue? Press x to exit\n");
		gets(str);
		
		//input = gets((char*)stdin);
		input = str[0];
		reset();
	} 
	
    return(0);
} 

// Play the game
void playGame() {
	int input, round = 1, gameOver = 0;
	
	while(gameOver != 1) {										// ERROR: goes to round 4 for player 2 - while(round<5)
		printf("\n\nROUND %d:\n", round);
		player = 1;										// Start with Player 1
		 	
		while(player < 3) {									// Take turns for 2 players
			gameOver = winnerTest(); 						
			
			if((gameOver != 1) && (player < 3)) {
				if(player==1) 
					SetConsoleTextAttribute(hConsole, BLUE);
				else
					SetConsoleTextAttribute(hConsole, GREEN);
				printf("\nPlayer %d: please select postion 1-9: ", player);
				SetConsoleTextAttribute(hConsole, NORM);
				scanf(" %d", &input);							// Get input from player
								
				if (checkInput(input) == 1) {						// If the character entered is OK
					displayGrid(input);						// Display the grid
					player++;							// Next player turn
				}
			} 										// replace previous bracket -- still goes to round 4 before exit
		}
				 
		++round;
	}	// round
}

// Check if user input is 1 to 9
int checkInput(int playerMove) {
	int x, y, success = 0;
		
	for(x = 0; x < 3; ++x) {
		for(y = 0; y < 3; ++y) {
			if (playerMove == grid[x][y]) {				
				if (arrOutput[x][y] == 'X' || arrOutput[x][y] == 'O') {			// If the position in the grid already taken
					printf("\nAlready %c - Please Try Again\n", arrOutput[x][y]);
					return 0;
				}
				success = 1;								// The number is between 1 to 9
			}
		}
	}
	
	if (success == 0) printf("Try entering a number 1 to 9");					// If it goes through the loop, it is not between 1 and 9
	
	return success;
}

// Output the Grid
void displayGrid(int playerMove) {
	int i, j;
					  
	for(i = 0; i < 3; ++i) {
		for(j = 0; j < 3; ++j) {			
			if (playerMove == grid[i][j]) {
				if (player == 1) arrOutput[i][j] = 'X'; 				// player 1 = X
				if (player == 2) arrOutput[i][j] = 'O'; 				// player 2 = O
			}
			
			if (arrOutput[i][j] == 'X' ) {
				SetConsoleTextAttribute(hConsole, BLUE);
				printf("%c ",arrOutput[i][j]);	
				SetConsoleTextAttribute(hConsole, NORM);
			}
			else if (arrOutput[i][j] == 'O' ) {
				SetConsoleTextAttribute(hConsole, GREEN);
				printf("%c ",arrOutput[i][j]);	
				SetConsoleTextAttribute(hConsole, NORM);
			}
			else
				printf("%c ",arrOutput[i][j]);	
			
			if (j < 2)  {	
				SetConsoleTextAttribute(hConsole, RED);
				printf("| ");				
				SetConsoleTextAttribute(hConsole, NORM);
			}
		}
		
		//(i < 2) ? printf("\n__________\n") : printf("\n");					// Line separating rows, or new line
		if (i<2){					
			SetConsoleTextAttribute(hConsole, RED);						// SetConsoleTextAttribute() sets foreground (text) and background colour for characters in the console
			printf("\n__________\n");							// Display message in single colour
			SetConsoleTextAttribute(hConsole, NORM);					// Reset to original colour scheme
		}
		else printf("\n");

	}
}

// Check Winner
int winnerTest() {
	int i, j, winner = 0;
	
	for(i = 0; i < 3; ++i) {																								// Check rows
		for(j = 0; j < 3; ++j) {
			// Check rows, columns, and diagonals for match
			if (arrOutput[0][0] == arrOutput[0][1] && arrOutput[0][1] == arrOutput[0][2]) winner = arrOutput[0][0]; 	// 123	
			else if (arrOutput[1][0] == arrOutput[1][1] && arrOutput[1][1] == arrOutput[1][2]) winner = arrOutput[1][0]; 	// 456
			else if (arrOutput[2][0] == arrOutput[2][1] && arrOutput[2][1] == arrOutput[2][2]) winner = arrOutput[2][0]; 	// 789
			else if (arrOutput[0][0] == arrOutput[1][0] && arrOutput[1][0] == arrOutput[2][0]) winner = arrOutput[0][0]; 	// 147
			else if (arrOutput[0][1] == arrOutput[1][1] && arrOutput[1][1] == arrOutput[2][1]) winner = arrOutput[0][1]; 	// 258
			else if (arrOutput[0][2] == arrOutput[1][2] && arrOutput[1][2] == arrOutput[2][2]) winner = arrOutput[0][2]; 	// 369
			else if (arrOutput[0][0] == arrOutput[1][1] && arrOutput[1][1] == arrOutput[2][2]) winner = arrOutput[0][0]; 	// 159
			else if (arrOutput[0][2] == arrOutput[1][1] && arrOutput[1][1] == arrOutput[2][0]) winner = arrOutput[0][2]; 	// 357
		}
	}
	
	if (winner != 0) {
		if (winner == 'X') printf("\n\nGAME OVER\nPlayer 1 Is The Winner");
		else printf("\n\nGAME OVER\nPlayer 2 Is The Winner");
			
		player += 2;		// terminate player 1 or 2 turn loop
		return  1;		// terminate rounds loop
	}
	
	return 0;
}

// Reset the game grid
void reset() {
	char reset[3][3]={'1','2','3','4','5','6','7','8','9'};	
	int x, y;
 
	for(x = 0; x < 3; ++x)  {
		for(y = 0; y < 3; ++y) {
			arrOutput[x][y] = reset[x][y];
		}
	}
}    
