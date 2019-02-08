#include <stdio.h>
 
/* function declaration */
double getAverage(int *arr, int size);
 
int main () 
{
   int balance[5] = {1000, 2, 3, 17, 50};
   double average;
   
   average = getAverage( balance, 5 ) ;			// pass pointer to the array as an argument
   
   printf("Average value is: %.2f\n", average );	// output returned value
   
   getch();
   return(0);
}

double getAverage(int *arr, int size) {

   int  i, sum = 0;       
   double avg;          
 
   for (i = 0; i < size; ++i)
   {
      sum += arr[i];
   }
 
   avg = (double)sum / size;
   return avg;
}
