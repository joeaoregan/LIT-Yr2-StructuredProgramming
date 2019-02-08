#include <stdio.h>

#define area length*width   // macro definition - implented for code clarity
 
 main()
 {
       int length, width;
       
       printf("length =");
       scanf("%d", &length);
       
       printf("width =");
       scanf("%d",&width);
       
       printf("\narea = %d",area);
       
       getch();
       return (0);
}
