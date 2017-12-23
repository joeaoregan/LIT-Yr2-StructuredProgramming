#include<stdio.h>

//#define ROWS 3
//#define COLUMNS 3

main()
{
      
    printf("display grid:\n");
      
    int i=0,j=0;
    
    int user;
    char grid[3][3]={'1','2','3','4','5','6','7','8','9'};
    char outputGrid[3][3]={'1','2','3','4','5','6','7','8','9'};

    // print grid
    for(i=0;i<3;++i)
    {
     for(j=0;j<3;++j)
     {
      printf("%c ",grid[i][j]);
      
     } // end of j for
     printf("\n");
    } // end of i for
    
    // Player 1 go
    printf("Player 1: please select postion 1-9: ");
    scanf(" %c",&user);
    
    for(i=0;i<3;++i)
    {
    
     for(j=0;j<3;++j)
     {
     
     if (user==grid[i][j])
     {
      outputGrid[i][j]='X';
     }
     
     printf("%c ",outputGrid[i][j]);
     } // end of j for
     printf("\n");
    } // end of i for
  
    // player 2 go
    printf("Player 2: please select postion 1-9: ");
    scanf(" %c",&user);
    
    for(i=0;i<3;++i)
    {
    
     for(j=0;j<3;++j)
     {
     
     if (user==grid[i][j])
     {
      outputGrid[i][j]='O';
     }
     
     printf("%c ",outputGrid[i][j]);
     } // end of j for
     printf("\n");
    } // end of i for
    
    getch();
    return(0);
 } // end of main
