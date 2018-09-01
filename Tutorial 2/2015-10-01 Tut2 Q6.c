/* Tutorial 2 - C Fundamentals 2 Q6 */

/* Joe O'Regan */
/* 01-10-2015 */

#include<stdio.h>
main()
{
      int i=1,j=2;
      long ix=3;
      short s=4;
      float x=5;
      double dx=6;
      char c;
      
      // 6.a.
      int output= i + 'c';
      printf("A. Answer is %d\n", output);
      
      // 6.b.
      float output2 = x + 'c';
      printf("B. Answer is %f\n", output2);
      
      // 6.c.
      output2=dx+x;
      printf("C. Answer is %f\n", output2);
      
      // 6.d.
      output=((int)dx)+ix;
      printf("D. Answer is %d\n", output);
      
      // 6.e.
      output=s+j;
      printf("E. Answer is %d\n", output);
      
      // 6.f.
      output=ix+j;
      printf("F. Answer is %d\n", output);
      
      // 6.g.
      output=s+'c';
      printf("G. Answer is %d\n", output);
      
      // 6.h.
      output=ix+'c';
      printf("H. Answer is %d\n", output);
                
             
      getch();
      return(0);    
      }
      
