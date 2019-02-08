/* Tutorial 2 - C Fundamentals 2 Q6 */

/* Joe O'Regan */
/* 07-10-2015 */

#include<stdio.h>
main()
{
      int i =1,j=2;
      long ix=3;
      short s=4;
      float x = 5.00;
      double dx = 6.00;
      char c;
      
        // a - int
        int outputA = i + c;
        printf("A. i + c = %d\n", outputA);
      
        // b - float
        float outputB = x + c;
        printf("B. x + c = %f\n", outputB);
       
    	// c - double
    	double outputC = dx + x;
    	printf("C. dx + x = %f\n", outputC);
    	
    	// d - long
    	int outputD = (int)dx + x;
    	printf("D. ((int) dx) + x = %d\n", outputD);
        
		// e - int
		int outputE = s + j;
		printf("E. s + j = %d\n", outputE);
		
		// f - long
		long outputF = ix + j;
		printf("F. ix + j = %d\n", outputF);
		
		// g
		s = c; // int
		printf("G. s + c = %d\n", s);
		// h
		ix + c; // c becomes int, then long?
		printf("H. ix + c = %d\n", ix);     
      getch();
      return(0);    
      }
      
