 #include<stdio.h>
 main()
 {
 int x=99;
 int *p1,*p2;
 
 p1=&x; // the address of x is assigned to p1
 p2=p1; // the address of x is assigned indirectly to p2
 
 printf("Values at p1 and p2 are %d %d \n",*p1,*p2);
 printf("Addresses pointed to by p1 and p2 are %p %p \n",p1,p2);  // &p printf f format specifier that causes printf to display an address in a format used by the host computer
}
