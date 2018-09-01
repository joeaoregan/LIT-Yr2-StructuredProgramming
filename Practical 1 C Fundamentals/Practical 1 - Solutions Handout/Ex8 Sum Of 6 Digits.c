/* A program to calculate the sum of a six digit number*/
/* 346572*/

/* Joe O'Regan */
/* 23-09-2015*/

#include<stdio.h>
main()
{
      int value,sum,new_Value,rem;
      printf("Please Enter a Six Digit Value:");
      scanf("%d",&value);
      
      printf("The Value you entered is %d:",value);
      sum = value%10;
      printf("Sum = %d:",sum);
      new_Value=value/10;
      printf("new_value %d:",new_Value);
      sum = sum + new_Value%10;
      new_Value = new_Value/10;
      sum = sum + new_Value%10;
      new_Value = new_Value/10;
      sum = sum + new_Value%10;
      new_Value = new_Value/10;
      sum = sum + new_Value%10;
      new_Value = new_Value/10;
      sum = sum + new_Value%10;
      new_Value = new_Value/10;
      printf("The Total Sum is %d:",sum);
      
      getch();
      return(0);
      }
      
