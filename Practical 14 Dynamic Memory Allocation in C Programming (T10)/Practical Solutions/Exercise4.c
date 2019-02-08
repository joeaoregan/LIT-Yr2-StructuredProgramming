#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
  float *s;
  register int t;
   
  s = (float*)malloc(100*sizeof(float));
  
  if(s==NULL){
  printf("Memory request failed\n");
  }
  
  free(s);  
   
  s=NULL;   
 getch();   
 return(0);    
   
}
