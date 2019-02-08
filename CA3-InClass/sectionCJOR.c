/* section AJOR */

/* Joe O'Regan */
/* 21-10-2015 */

#include<stdio.h>
main()
{
    char arrSentence[]="Welcome to C Programming";
    int j,aTotal=0,eTotal=0,iTotal=0,oTotal=0,uTotal=0,consanant;
    int vowelTotal=0;
    
    // calculate amount of each vowel
    for(j=0;j<24;++j)
    {
     if(arrSentence[j]=='a') 
     {
      aTotal++;
      vowelTotal++;
     }
     else if(arrSentence[j]=='e')
     {
      eTotal++;
      vowelTotal++;
     }
     else if(arrSentence[j]=='i')
     {
      iTotal++;
      vowelTotal++;
     }
     else if(arrSentence[j]=='o')
     {
      oTotal++;
      vowelTotal++;
     } 
     else if(arrSentence[j]=='u')
     {
      uTotal++;
      vowelTotal++;
     } 
     else
      consanant++;
      
    } // end of for loop
    
    // output original sentence
    printf("%s\n",arrSentence);
    // function calls
    DisplayVowelCountOutput(aTotal,eTotal,iTotal,oTotal,uTotal,vowelTotal); 
    
      getch();
      return(0);
      }
      
    DisplayVowelCountOutput(int a, int e, int i, int o, int u, int x)
    {
    printf("Number of a's = %d\n",a);
    printf("Number of e's = %d\n",e);
    printf("Number of i's = %d\n",i);
    printf("Number of o's = %d\n",o);
    printf("Number of u's = %d\n",u);
    printf("Total number of vowels = %d\n",x);
    } // end of function
