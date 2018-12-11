#include<stdio.h>
#include<string.h>

void password_Valid(char a[]);

int main()
{
    char ppsNumber[10];
    printf("\nPlease Enter a PPS Number:");
    scanf("%s",ppsNumber);
    password_Valid(ppsNumber);
}

void password_Valid(char a[])
{    
    int len=strlen(a);
    printf("\n%d",len);
    char lastdigit; 
    if(len!=9)
    {
        printf("\nInvalid PPS Number:, Please Try Again!");
    }
    else
    {
        lastdigit = a[len-1];
        printf("\n%c",lastdigit);
        if((lastdigit=='A') || (lastdigit=='B') || (lastdigit=='K') || (lastdigit=='R'))
        {
            printf("\nValid PPS Number:, Please wait while the system calculates you Tax Free Allowance");
            switch(lastdigit)
            {
            case 'A': printf("\nTax Free Allowance:3330");
                  break;       
            case 'B': printf("\nTax Free Allowance:2670");
                  break;
            case 'K': printf("\nTax Free Allowance:3130");
                  break;
            case 'R': printf("\nTax Free Allowance:0");
                  break;
            default:
                printf("\nInvalid PPS Number:, Please Try Again!");
                break;
                }
        }         
    }              getch();
}
