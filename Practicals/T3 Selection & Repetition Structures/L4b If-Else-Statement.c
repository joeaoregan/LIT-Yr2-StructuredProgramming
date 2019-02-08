/*Program to Demonstrate an if-else Statement*/

main()
{
 int age=20;
 int years;
 
 if(age<18)
 {
  	years=18-age;
	printf("You can vote in %d years.\n",years);	   
 }
 else
 {
 	printf("You are eligible to vote.\n");	   
 }
 getch(); 
 return(0);
}
