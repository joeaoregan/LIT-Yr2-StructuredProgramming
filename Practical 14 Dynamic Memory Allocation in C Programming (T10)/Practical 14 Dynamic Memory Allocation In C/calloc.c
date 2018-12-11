/* The C library function void *calloc(size_t nitems, size_t size) 
   allocates the requested memory and returns a pointer to it. 
   The difference in malloc and calloc is that malloc does not 
   set the memory to zero where as calloc sets allocated memory to zero.
   
   Parameters:
   nitems -- This is the number of elements to be allocated.
   size -- This is the size of elements.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i, n;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)calloc(n, sizeof(int));
   
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) 
   {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) 
   {
      printf("%d ",a[i]);
   }
   free( a );
   
   getch();
   return(0);
}
