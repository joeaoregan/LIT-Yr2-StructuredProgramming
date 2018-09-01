/* Practical 7: Ex 4 */

/* Joe O'Regan */
/* 14-10-2015 */

#include<stdio.h>
int main()
{
    int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,0};
    int b[4][4]={2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    int c[4][4];
    int i,j;
    
    printf("4*4 Matrix A:\n");
    for(i=0;i<4;++i)
    {
     for (j=0;j<4;++j)
      {
         printf("Ax%dy%d = %d\n",i,j,a[i][j]);
       
      } // end of j
     } //end of i
    

    
    printf("\n4*4 Matrix B:\n");
     
     for(i=0;i<4;++i)
    {
     for (j=0;j<4;++j)
     {
      //if (a[i][j]+b[i][j]==b[i][j]+a[i][j])
         printf("Bx%dy%d = %d\n",i,j,b[i][j]);
      } // end of j
     } //end of i
     
    printf("\n4*4 Matrix A + B:\n");
    
    for(i=0;i<4;++i)
    {
     for (j=0;j<4;++j)
      {
       c[i][j]=a[i][j]+b[i][j];
       printf("Cx%dy%d = %d\n",i,j,c[i][j]);
       
      } // end of j
     } //end of i
     
    printf("\n4*4 Matrix B + A:\n");
    
    for(i=0;i<4;++i)
    {
     for (j=0;j<4;++j)
      {
       c[i][j]=b[i][j]+a[i][j];
       printf("Bx%dy%d + Ax%dy%d = %d\n",i,j,i,j,c[i][j]);
       
      } // end of j
     } //end of i
    
    
    getch();
    return(0);
 } // end of main
      
