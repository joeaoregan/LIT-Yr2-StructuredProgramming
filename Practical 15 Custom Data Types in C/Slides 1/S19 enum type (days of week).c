#include <stdio.h>

int main()
{
  enum DaysOfWeek{Mon=1,Tue,Wed,Thur,Fri,Sat,Sun};
     
  printf("\nMonday is Day %d of the week \n",Mon);
  printf("\nTuesday is Day %d of the week \n",Tue);
  printf("\nWednesday is Day %d of the week \n",Wed);
  printf("\nThursday is Day %d of the week \n",Thur);
  printf("\nFriday is Day %d of the week \n",Fri);
  printf("\nSaturday is Day %d of the week \n",Sat);
  printf("\nSunday is Day %d of the week \n",Sun);

getch();
return(0);
}

