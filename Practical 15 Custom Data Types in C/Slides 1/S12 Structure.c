#include <stdio.h>
int main(void)
{
struct addr
{
 char name[30];
 char street[40];
 char city [20];
 char state[3];  };       
struct addr addr_info;

puts("\nEnter in a Name");
gets(addr_info.name);
puts("\nEnter in a street");
gets(addr_info.street);
puts("\nEnter in a city");
gets(addr_info.city);

getch();
return(0);
}
