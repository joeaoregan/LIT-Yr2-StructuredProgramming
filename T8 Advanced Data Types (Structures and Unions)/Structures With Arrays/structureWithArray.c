// Example a structure which contains arrays

#include<stdio.h>
int main(void)
{
    
struct addr
{
char name[30];
char street[40];
char city [20];
char state[3];
 };
 
struct date
{
 int day;
 int month;
 int year;
};

struct addr addr_info;
struct date dob;

puts("\nEnter in a Name");
gets(addr_info.name);     // only for string
puts("\nEnter in a street");
gets(addr_info.street);
puts("\nEnter in a city");
gets(addr_info.city);

puts("\nEnter Day");
scanf("%d",&dob.day);     // can't use gets
puts("\nEnter Month");
scanf("%d",&dob.month);
puts("\nEnter year");
scanf("%d",&dob.year);


printf("\nname: %s",addr_info.name);
printf("\nStreet: %s",addr_info.street);
printf("\nCity: %s",addr_info.city);
printf("DOB: %d %d %d",dob.day, dob.month,dob.year);

getch();
}
