/*	Joe O'Regan
	K00203642
	CA Part 2 */

#include<stdio.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h> 

	char *hangman[]={											// FULL Hangman
	"  _________",	//0 
	"  |/    |",	//1 
	"  |   __O__",	//2 
	"  |     |",	//3 
	"  |    / \\",	//4 
	"__|________"};	//5 
	
	char *altArms[]={"  |     O__","  |   __O","  |     O",};	// ARMS - left, right, none
	char *altBody[]={"  |"};									// BODY - none
	char *altLegs[]={"  |      \\","  |    /","  |",};			// LEGS - 0.Left, 1.right, 2.none
	char arrOutput[100];										// string to be output
	char letter;												// letter guessed by player
	char filmName[100];											// Randomly selected movie title from array
	char guessString[100];										// String entered by player guessing answer
	char letterCopy[2]="";
	char lettersGuessed[100]="";								// Letters entered by player
	char vowels[]="aeiou";
    char name[11];												// Player name	
	int option=1,leftLeg=1,rightLeg=1;							// test swap
	int rArm=1,lArm=1,body=1;									// right arm, left arm
	int lives=5;												// Number Of Player Lives/Guesses
	int noOfBodyParts;											// Count Body parts being cut off
	int selection,filmNameLength;
	int difficultyLevel=0;							
	int numberOfGuesses=0,correctGuesses=0,incorrectGuesses;	// Guess stats
	int vowelCount,consonantCount;								// letter stats	
	int stringGuessCorrect=1;
	int gameover=0;
	int score=0;

	
main()
{	
	drawFileHangman();
	mainMenu();
	
	getch();
	return(0);
} // ************* end of main
/********************************************************************************/
//									Main Menu
/********************************************************************************/
mainMenu()
{
	
	int selection=0;	
	
	do	
	{
	 printf("\nHangman\n\n");
     printf("1. Play Game\n");
     printf("2. High Scores and Analytics\n");
     printf("3. Exit\n");
     printf("\nEnter Selection: ");
     scanf("%d",&selection);    
	              
     switch(selection)
     {
    	case 1: printf("Option 1:\n\n");
    	
	 	system("COLOR 07");
		printf("Play Game\n\n");
		puts("Please Enter Name: ");
		scanf("%s", &name);
		printf("Name Entered Is: ");
		puts(name);
		difficultyMenu();		
    	break;
     
    	case 2: printf("Option 2:\n\n");
    	
     	system("COLOR E0");
    	printf("High Scores and Analytics\n\n");  
    	highScore();
    	break;
     
     }         
 }while(selection != 3);  }
/********************************************************************************/
//								Difficulty Menu
/********************************************************************************/
difficultyMenu()
{
	system("COLOR 07");
	int option=0;
    char name[20];
    difficultyLevel=0;
	
	do	
	{
	 printf("\nDifficulty Level\n\n");
     printf("1. Easy\n");
     printf("2. Medium\n");
     printf("3. Hard\n");
     printf("4. Back To Main Menu\n");
     printf("\nEnter Selection: ");
     scanf("%d",&option);    
	              
     switch(option)
     {     	
    	case 1: printf("Option 1:\n\n");
	 	
		printf("You Have Chosen An Easy Difficulty Level\n\n");
		difficultyLevel=1;
		playGame();
    	break;
     
    	case 2: printf("Option 2:\n\n");
     
       	printf("You Have Chosen A Medium Difficulty Level\n\n");  
       	difficultyLevel=2;
		playGame();
    	break;
    	
     	case 3: printf("Option 3:\n\n");
     
    	printf("You Have Chosen A Hard Difficulty Level\n\n");  
    	difficultyLevel=3;
		playGame();
    	break;
    	
     	case 4: printf("Option 4:\n\n");
     	
     	system("COLOR 07");
    	printf("Main Menu\n\n"); 
    	break;
     
     }         
 }while(option != 4);  
}

/********************************************************************************/
//								Select Film
/********************************************************************************/
selectFilm()
{
	int i;
	char *movie[]={		// Film Titles Array
	"gladiator",		// 0
	"prometheus",		// 1
	"lawless",			// 2
	"battleship",		// 3
	"skyfall",			// 4
	"lincoln"};			// 5
	
 	srand(time(NULL)); 															// random number set <<-- needs to go before selection set to random
	int selection = rand() % 6;	
	hints(selection);
	
	filmNameLength=strlen(movie[selection]);									// number of characters in title of movie selected
	strcpy(filmName,movie[selection]);											// OUTPUT: copy selected movie string to an array	
	
	for(i=0;i<100;++i)		   													// RESET: set/reset arrOutput was getting jibberish
	{
		arrOutput[i]=' ';
	}	
}

hints(option)
{
	char answerHint1[20];
	char answerHint2[20];
	char *hintActor[]={		// hint at films Actor
	"Russell Crowe",		// 0
	"Michael Fassbender",	// 1
	"Tom Hardy",			// 2
	"Alexander Skarsgard",	// 3
	"Daniel Craig",			// 4
	"Daniel Day-Lewis"};	// 5
	
	char *hintDirector[]={	// hint at films Director
	"Ridley Scott",			// 0
	"Ridley Scott",			// 1
	"John Hillcoat",		// 2
	"Peter Berg",			// 3
	"Sam Mendes",			// 4
	"Steven Spielberg"};	// 5
	
	
	strcpy(answerHint1,hintActor[option]);
	strcpy(answerHint2,hintDirector[option]);
	
	if(difficultyLevel<3)
	{
	 puts("\nHint(s):");
	 printf("\nThe Film Stars: \t%s\n",answerHint1);
	}
	if(difficultyLevel==1)
	{
	 printf("The Films Director: \t%s\n",answerHint2);
	}
	
}
outputDashes()
{
	int i;
	
	arrOutput[filmNameLength]='\0';												// set end of Output array	
	puts("\nEnter '0' To Guess Full Title");
	printf("\nNumber Of Characters In Movie Selected: %d\n\n",strlen(arrOutput));	// Length of Film Title
	
	for (i=0;i<filmNameLength;++i)												// for loop sets guess line to all underscores
	{
		arrOutput[i]='_';
	}
	outputGuessLine();
}

outputGuessLine()
{
	int i;
	
	arrOutput[0]=toupper(arrOutput[0]);  										//output edited array
	for(i=0;i<filmNameLength;++i)
	{
		printf("%c ",arrOutput[i]);
	}
	printf("\n\n");	
}
/********************************************************************************/
/*									Play Game	
/********************************************************************************/
playGame()
{	
	system("COLOR 07");															// reset system colour
	int i;
	
	drawFileHangman();
	selectFilm();
	outputDashes();
	resetVariables();
	
	do
	{
	 enterLetter();
	
	 if(stringGuessCorrect!=0) 
	 {
	  checkLetter();	
	  outputGuessLine();
	 }
	  gameOverCheck();
	} 
	while((noOfBodyParts>0)&&(correctGuesses!=filmNameLength)&&(stringGuessCorrect!=0));	
}

enterLetter()																	// ENTER A LETTER
{
	int lineCount;
	
	lineCount=numberOfGuesses+1;
	
	printf("\nGuess %d: Please Enter A Letter: ",lineCount);
	scanf(" %c",&letter);

	checkString(); 
	
	letter=tolower(letter); 
	letterCopy[0]=letter;
	if(letter!=0) letterStats();
}

checkString()																	// CHECK STRING
{	
	if(letter=='0') 
	{
	numberOfGuesses++;
	printf("\n\nEnter String For Guess\n\n");
	scanf("%s",guessString);
	guessString[0]=tolower(guessString[0]);
	stringGuessCorrect = strcmp(guessString,filmName);							// TEST DATA: printf("\n\nstringGuessCorrect = %d\n\n",stringGuessCorrect);
	
	if(stringGuessCorrect==0) 
	 printf("\nYou Have Guessed Correctly");
	else 
	 printf("\n\aYou Have Guessed Incorrectly");
	
	printf("\nString Entered By Player Is: ");
	guessString[0]=toupper(guessString[0]);
	puts(guessString);
	}
}

letterStats()																	// LETTER STATS
{
	int i;
	
	for(i=0;i<5;++i)
	{
		if(letter==vowels[i]) vowelCount++;
	}
	if(letter!='0')
	 consonantCount=(numberOfGuesses + 1) -vowelCount;
	else
	 consonantCount=numberOfGuesses-vowelCount;
	
}
resetVariables()																// RESET VARIABLES
{	
	vowelCount=0;
	consonantCount=0;
	incorrectGuesses=0;
	correctGuesses=0;
	numberOfGuesses=0;
	stringGuessCorrect=1;
	memset(lettersGuessed,0,strlen(lettersGuessed));							// RESET: set/reset lettersGuessed
	noOfBodyParts=5;
	gameover=0;
	score=0;
}
/********************************************************************************/
/*								Letter Checks									*/
/********************************************************************************/
checkLetter()
{ 
 int i,j;
 char *search;
 int letterOccurrence=0;														// number of times each letter occursr
 
 search = strchr (lettersGuessed, letter);

 if(search != NULL) printf ("\n\aLetter Guessed Already\nTry Again\n\n");
 else 
 {
 numberOfGuesses++;	
 strcat(lettersGuessed,letterCopy);	
	
 letterOccurrence=0;															// reset occurrence of each letter to 0	

 for(j=0;j<filmNameLength;++j)													// check letters
 {
  if(filmName[j]==letter) 														// check letter in Film Title
  {	  	
   arrOutput[j]=letter;															// Ouput letter if in grid
   correctGuesses++;				
   letterOccurrence++;																			
  }
 }	
	 
 if(letterOccurrence==0) 
 {
  incorrectGuesses++;
  amputateLimb();																// if letter didn't occur amputate limb	 
  noOfBodyParts--;																// decrease number of body parts
  printf("\n\aMinus 1 Life - Player Has %d Lives Left\n",noOfBodyParts);
 }
 printf("There Is %d Of Letter %c\n",letterOccurrence,letter);					// Output: The amount of letter guessed
 printf("Total Number Of letters Guessed Correctly Is: %d\n",correctGuesses);	// 
 printf("Letters Guessed already: %s\n\n", lettersGuessed);
 }
}

gameOverCheck()
{
	
	if(noOfBodyParts==0) 
	{
	 system("COLOR C0");
	 printf("\nGame Over - Player Has Lost");
	 gameover=1;
	 stats();	 
	}
	if((correctGuesses==filmNameLength)||(stringGuessCorrect==0))
	{
	 system("COLOR 9F");
	 printf("\nGame Over - Player Has Won");
	 gameover=1;	 
	 stats();	 
	}
}
stats()
{
	float calc;																	//SET GLOBAL: int score;
	
	calc = (((float) lives / (float) numberOfGuesses) * 100) * difficultyLevel;	// calculate score
	score= (int) calc;
// TEST DATA:	
//	printf("\nLives: %d", lives);	
//	printf("\nnum guesses: %d", numberOfGuesses);	
//	printf("\nlevel: %d", difficultyLevel);	
	
	filmName[0]=toupper(filmName[0]);
	printf("\nThe Film Was %s\n\n", filmName);
	printf("\nPlayer Name:\t%s\tPlayer Score: %d\n\n",name,score);
	printf("Number Of Guesses: \t\t\t%d\n",numberOfGuesses);
	printf("Number Of Correct Letter Guesses: \t%d \t(Includes Recurring Characters)\n",correctGuesses);
	printf("Number Of Incorrect Guesses: \t\t%d\n",incorrectGuesses);
	printf("Number Of Vowels Used: \t\t\t%d\n",vowelCount);
	printf("Number Of Consonants Used: \t\t%d\n",consonantCount);
	
	highScore();
}

/********************************************************************************/
/*								Hangman Output									*/
/********************************************************************************/
drawFileHangman()
{
	FILE *fp;
	char buff[255];
	int i;

	fp = fopen("hangman.txt", "r");
   
	for(i=0;i<6;i++)
	{
	 fgets(buff, 255, (FILE*)fp);
	 printf("%s", buff );
	}
   printf("\n");
   
   fclose(fp);
}
/********************************************************************************/
//								Amputate Limbs
/********************************************************************************/

amputateLimb()
{
	do{
	puts("Option 1. left leg");
	puts("Option 2. right leg");
	puts("Option 3. left arm");
	puts("Option 4. right arm");
	puts("Option 5. body");
	puts("\nEnter arm / leg to cut off: ");
	scanf("%d",&option);
		
	optionCheck();
	drawHangman();
	checkLives();
	}while(noOfBodyParts==lives);
}
/********************************************************************************/
//								 Draw Hangman
/********************************************************************************/

drawHangman()
{
	int i;
	
	printf("  Hangman\n");
	for(i=0;i<6;++i)
	{
		printf("%s\n",hangman[i]);
	}
}
/********************************************************************************/
//								 Cut Off Left Leg
/********************************************************************************/

cutLLeg()
{
	puts("Left Leg Cut Off\n");
	leftLeg=0;
	lives--;
}
/********************************************************************************/
//								Cut Off Right Leg
/********************************************************************************/

cutRLeg()
{
	puts("Right Leg Cut Off\n");
	rightLeg=0;
	lives--;
}
/********************************************************************************/
//								Cut Off Left Arm
/********************************************************************************/

cutLArm()
{
	puts("Left Arm Cut Off\n");
	lArm=0;
	lives--;
}

/********************************************************************************/
//								Cut Off Right Arm
/********************************************************************************/

cutRArm()
{
	puts("Right Arm Cut Off\n");
	rArm=0;
	lives--;
}
/********************************************************************************/
//								Hangman Check
/********************************************************************************/

optionCheck()
{
if(option==1)
{
	if((leftLeg==1 && rightLeg==1) || (rightLeg==0 && leftLeg==1))
	{
	  	if(rightLeg==1) hangman[4]=altLegs[0];									// 0.cut off left leg
	  	else hangman[4]=altLegs[2];												// 2.both legs
	  	cutLLeg();
	}
	else if(leftLeg==0 && rightLeg==1)
	{
		hangman[4]=altLegs[2];													// 2.both legs
		puts("There Is No Left Leg");
		cutRLeg();
	}
	else puts("bye bye legs");
	
}
	
	if(option==2)
	{
	  if((leftLeg==1 && rightLeg==1) || (leftLeg==0 && rightLeg==1))
	  {
		if(leftLeg==1) hangman[4]=altLegs[1];									// test - cut off right leg
		else hangman[4]=altLegs[2];												// 2.both legs
		cutRLeg();
	  }
	  else if(rightLeg==0 && leftLeg==1)
	  {
		hangman[4]=altLegs[2];													// 2.both legs
		puts("There Is No Right Leg");
		cutLLeg();
	  }
	  else puts ("There are no legs!!");
	}
	
	if(option==3)
	{
	  if((lArm==1 && rArm==1) || (lArm==1 && rArm==0))
	  {
		if(rArm==1) hangman[2]=altArms[0];										// test - cut off left arm
		else hangman[2]=altArms[2];												// 2.both arms
		cutLArm();
	  }
	  else if(lArm==0 && rArm==1)
	  {
		hangman[2]=altArms[2];													// 2.both arms
		puts("There Is No Left Arm");
		cutRArm();
	  }
	  else puts("bye bye arms");
	}
	
	if(option==4)
	{
	  if((lArm==1 && rArm==1) || (rArm==1 && lArm==0))
	  {
		if(lArm==1) hangman[2]=altArms[1];										// test - cut off right arm
		else hangman[2]=altArms[2];												// 2.both arms
		cutRArm();
	  }
	  else if(rArm==0 && lArm==1)
	  {
		hangman[2]=altArms[2];													// 2.both arms
		puts("There Is No Right Arm");
		cutLArm();
	  }
	  else puts ("There are no arms left");
	}
	
	if(option==5)
	{
	  if(leftLeg==0&&rightLeg==0&&lArm==0&&rArm==0)
	  {
		hangman[3]=altBody[0];
		lives--;
		puts("Body cut off");
		puts("All That's Left Is A Head");
		puts("You're Dead!!!\n");
		body=0;
		lives--;
	  }
	  else printf("\nIf you cut off the body, what will hold on the arms and legs?\n\n");
	}
}
/********************************************************************************/
//								Check Number Of Lives
/********************************************************************************/

checkLives()
{
	printf("\nNo. of lives left: %d\n\n",lives);
	if(leftLeg==0&&rightLeg==0&&lArm==0&&rArm==0&&body==0) 						// check if game is finished
	{
		puts("\nGAME OVER\n");
		option=0;
	}
}
/********************************************************************************/
//								Leaderboard
/********************************************************************************/
/*writeHighScore()
{
	int score;	
	score = ((lives / numberOfGuesses) * 100) * difficultyLevel;
	
	typedef struct{
      char name[11];
      int score;
      int numberOfGuesses;
      int correctGuesses;
      int vowelCount;
      int consonantCount;
  }player;
   
   FILE *scp;
   scp = fopen("leaderboard.txt","a");
      
   player p1;
   
   fprintf(scp,"\n%s\t",name);
   fprintf(scp,"%d\t",score);
   fprintf(scp,"%d\t",numberOfGuesses);
   fprintf(scp,"%d\t",correctGuesses);
   fprintf(scp,"%d\t",vowelCount);
   fprintf(scp,"%d\t",consonantCount);

fclose(scp);	
}*/
/********************************************************************************/
//								Read High Score
/********************************************************************************/ 
highScore()																		// reads 10 scores & details from file, adds current score and details, sorts 11, outputs 10 scores & details
{
	int i,j,k,l,m;
	
	struct leaderboard{
      char name[11];
      int score;
      int numGuesses;
      int correctGuesses;
      int vowelCount;
      int consonantCount;
   }ps[11],temp;																// ps = player scores
   
   FILE *scp;
   scp = fopen("leaderboard.txt","r");											//TEST DATA: scp = fopen("playerScores.txt","r");
   
   for(i=0;i<10;++i)
	{
	 fscanf(scp,"\n%[^\t]",ps[i].name);
	 fscanf(scp," %d",&ps[i].score);
	 fscanf(scp," %d",&ps[i].numGuesses);
	 fscanf(scp," %d",&ps[i].correctGuesses);
	 fscanf(scp," %d",&ps[i].vowelCount);
	 fscanf(scp," %d",&ps[i].consonantCount);	 
	}
    
	strcpy(ps[10].name,name);
	ps[10].score=score;
	ps[10].numGuesses=numberOfGuesses;
	ps[10].correctGuesses=correctGuesses;
	ps[10].vowelCount=vowelCount;
	ps[10].consonantCount=consonantCount;
	
	for (k=1;k<11;k++)															// sort 10 file scores & details + current score & details
	{
     for (j=0;j<11-k;j++)
	 {
      if(ps[j].score < ps[j+1].score) 											// > sorts largest first 
	  {
       temp = ps[j];
       ps[j] = ps[j + 1];
       ps[j + 1] = temp;
      }
     }
	}
	
	for(m=0;m<10;++m)															// OUTPUT: 10 scores higheset to lowest
	{     
	 printf("\n%d.\tPlayer: %s \tScore: %d\n",j+1,ps[m].name,ps[m].score);
	 printf("Number Of Guesses: \t%d",ps[m].numGuesses);
	 printf("\tCorrect Guesses: \t%d\n",ps[m].correctGuesses);
	 printf("Number Of Vowels: \t%d",ps[m].vowelCount);
	 printf("\tNumber Of Consonants: \t%d\n\n",ps[m].consonantCount);	 
	}																			// TEST DATA: printf("\n\nGameover: %d\n\n",gameover);
									
   fclose(scp);
   
   if(gameover==1)
   {
   
   FILE *scp2;																	// write high score
   scp2 = fopen("leaderboard.txt","w");
  
   for(l=0;l<10;++l)
	{
	 fprintf(scp2,"\n%s\t",ps[l].name);
	 fprintf(scp2,"%d\t",ps[l].score);
	 fprintf(scp2,"%d\t",ps[l].numGuesses);
	 fprintf(scp2,"%d\t",ps[l].correctGuesses);
	 fprintf(scp2,"%d\t",ps[l].vowelCount);
	 fprintf(scp2,"%d\t",ps[l].consonantCount);
	}
   fclose(scp2);
	}
}
//sortScore(struct leaderboard score)
//{
	
//}
