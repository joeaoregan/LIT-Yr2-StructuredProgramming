/*The C library function void *realloc(void *ptr, size_t size) 
attempts to resize the memory block pointed to by ptr that 
was previously allocated with a call to malloc or calloc.

void *realloc(void *ptr, size_t size)

ptr -- This is the pointer to a memory block previously allocated with malloc, 
calloc or realloc to be reallocated. If this is NULL, a new block is allocated 
and a pointer to it is returned by the function.

size -- This is the new size for the memory block, in bytes. If it is 0 and ptr 
points to an existing block of memory, the memory block pointed by ptr is deallocated 
and a NULL pointer is returned.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
   char *str;

   /* Initial memory allocation */
   str = (char *) malloc(15);
   strcpy(str, "tutorialspoint");
   printf("String = %s,  Address = %u\n", str, str);

   /* Reallocating memory */
   str = (char *) realloc(str, 25);
   strcat(str, ".com");
   printf("String = %s,  Address = %u\n", str, str);

   free(str);
   
   getch();
   return(0);
}
