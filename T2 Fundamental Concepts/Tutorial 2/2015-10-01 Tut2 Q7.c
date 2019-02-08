/* Tutorial 2 - C Fundamentals 2 Q7 */

/* Joe O'Regan */
/* 01-10-2015 */

#include<stdio.h>
main()
{
      int i =8,j=5,output;
      float x = 0.005, y = -0.01,output2;
      char c='c',d='d';
      
      output=(3 * i - 2 * j)%(2 * d - c);
      
      printf("The answer for 8.a is %d\n", output);
      
      output=2*((i/5)+(4*(j-3))%(i+j-2));
      
      printf("The answer for 8.b is %d\n", output);
      
      	  output2=(i-3*j)%(c+2*d)/(x-y);
      printf("The answer for 8.c is %f\n", output2);
            
      output2=-(i+j);
      printf("The answer for 8.d is %f\n", output2);
        
 	  output=i<=j; // False
      printf("The answer for 8.e is %d\n", output);
      
      output=5*(i+j)>'c'; // False
      printf("The answer for 8.f is %d\n", output);
      
      output=!(c==99); // False
      printf("The answer for 8.g is %d\n", output);
      
      output=(i>0)&&(j<5); // False
      printf("The answer for 8.h is %d\n", output);
      
      output=(i>0)||(j<5); // True
      printf("The answer for 8.i is %d\n", output);
      
      output=(x>y)&&(i>0)||(j>5); // True
      printf("The answer for 8.j is %d\n", output);
      
      output=(i>0)||(j<5); // True
	  printf("The answer for 8.k is %d\n", output);
                
             
      getch();
      return(0);    
      }
      
