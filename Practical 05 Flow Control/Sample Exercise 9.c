/* Exercise 9

/* Joe O'Regan */
/* 08-10-2015 */

#include<stdio.h>
int main()
{
    int R=1;
    int P=2;
    int S=3;
    int i;
    int Pscore=0;
    int Cscore=0;
    int computer=2;
    
    int choice;
    
    printf("Rock=1, Paper=2, and Scissors=3\n");
    
    for(i=0;i<5;i++)
    {
     printf("Enter your choice:");
     scanf("%d",&choice);
     
     if(choice==1)
     {
       if(computer==1)
       {
        printf("Draw\n");
       }
       if(computer==2)
       {
        printf("Computer Wins!\n");
        Cscore=Cscore+1;
       }
       if(computer==3)
       {
       printf("Player Wins\n");
       Pscore = Pscore + 1;
       }
     } // end of choice 1
     
     else if(choice==2)
     {
       if(computer==1)
       {
        printf("Draw\n");
       }
       if(computer==2)
       {
        printf("Player Wins!\n");
        Pscore=Pscore+1;
       }
       if(computer==3)
       {
       printf("Computer Wins\n");
       Cscore = Cscore + 1;
       }
     } // end of choice 2
     
     if(choice==3)
     {
       if(computer==1)
       {
        printf("Draw\n");
       }
       if(computer==2)
       {
        printf("Player Wins!\n");
        Pscore=Pscore+1;
       }
       if(computer==3)
       {
       printf("Computer Wins\n");
       Cscore = Cscore + 1;
       }
     } // end of choice 3 
     
     else
     {
      printf("Wrong Answer\n");
     }
     
     }
     
     // calculate scores
     if(Cscore>Pscore)
     {
      printf("Computer wins %d\n",Cscore,Pscore);
     }
     else if(Cscore<Pscore)
     {
      printf("Player wins %d\n",Pscore,Cscore);
     }
     else if(Cscore==Pscore)
     {
      printf("No winner, it is a draw!\n");
     }
    getch();
    return(0);
    }
      
