/*	Practical: File Input and Output
	Ex12
	Joe O'Regan
	09-12-2015  */
	
#include <stdio.h>

main()
{ 
    int i;
    int cel[10];
    float fahr[10];
    float total=0,average=0;
    float conversion=0.5;
    
    FILE *fp;
    fp = fopen("tempcel.txt","r");;
    
    for(i=0;i<10;i++)
    {
     fscanf(fp,"\n%d",&cel[i]);
    
     fahr[i]=cel[i]*conversion;
   
     printf("cel: %3d\t\t",cel[i]);
     printf("fahr: %.2f\n",fahr[i]);
    
     total=total+fahr[i]; //test
    }
    
    fclose(fp); // close read
    
    printf("\nSum of %i fahr temps: %.2f",i,total);
    average=total/10;
    
    FILE *fm;
    fm = fopen("tempfah.txt","w");
    
    fprintf(fm,"%f\t",average);
    printf("\nAverage: %.2f",average);
	
    fclose(fp); // close write
    
    getch();
    return(0);
}
