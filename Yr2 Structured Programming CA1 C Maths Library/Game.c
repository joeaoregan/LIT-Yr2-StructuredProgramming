/*
 math.h game
 
 Test:
 Enter turret angle: 45
 Enter distance to fire: 50 
 gives coordinates: x:35 y:35
 distance x & y both 14.64km away
 
 enter player x coordinate: 50
 enter player y coordinate: 50

x coordinate: 5.8
y coordinate: 5.8 ....gives direct hit

 */
 /* Joe O'Regan */
 /* 12-11-2015 */
 
#include <stdio.h>
#include <math.h>

#define PI 3.14159265
#define CTD (PI/180)
//#include <stdlib.h>
 
main()
{
    
    float angle,shotDistance,playerX,playerY;		// player coordinates
    float bombX,bombY;								// coordinates for missile strike
    float gapX,gapY;								// distance between enemy and missile detonation
	float targetX=50,targetY=50;					// enemy coordinates
    float distanceX,distanceY,distanceZ;			// distance between player and enemy
    float radians=57.2958;							// 180 / PI
    float coX,coY;
    
    printf("An enemy tank has been spotted to the north-west of your position\n");
    printf("It was lasted spotted 30km away, but was on the move\n");
    printf("Because it was damaged it can't have gone more than 100km\n");
    printf("Fire a long-range missile and see can we coax them out of hiding\n");
 
 	printf("Enter turret angle: ");
 	scanf("%f",&angle);
 	printf("Enter distance to fire: ");
 	scanf("%f",&shotDistance);
 	
 	// cos & sin - calculate x and y position of where missile landed
 	bombX=shotDistance * cos(angle * CTD);
 	bombY=shotDistance * sin(angle * CTD);
 	
 	printf("Missile has landed at coordinates X: %.0f, Y: %.0f\n",bombX,bombY);
 	
 	if(targetX>bombX)
	 {
	  float gapX=targetX-bombX;
	  printf("The Enemy has been spotted %.2fkm North ",gapX);
 	 }
 	else
 	{
 		gapX=bombX-targetX;
 		printf("The Enemy has been spotted %.2fkm South ",gapX);
 	}
	 if(targetY>bombY)
	 {
	  float gapY=targetY-bombY;
	  printf("And %.2fkm West of the detonation zone\n",gapY);
 	 }
 	else
 	{
 		gapY=bombY-targetY;
 		printf("And %.2fkm East of the detonation zone\n",gapY);
 	}
 	printf("The Enemy is on the move north-west slowly\n");
 	
 	// change enemy position
 	targetX= targetX + rand() % 20 +1;
 	targetY= targetY + rand() % 20 +1;
 	
 	// player chase enemy
 	printf("\nTime to pursue the enemy vehicle\n");
	printf("Enter player X Coordinate: ");
	scanf("%f",&playerX);
		
	printf("Enter player Y Coordinate: ");
	scanf("%f",&playerY);
	
	distanceX=targetX-playerX;
	distanceY=targetY-playerY;
		
	// atan()
	angle=atan(distanceX/distanceY);	// get angle to aim turret from coordinates x and y
	angle=angle*radians;				// convert to degrees
 	
 	printf("\nEnemy is in sight.");
  	printf("\nAim the turret %.2f degrees\n",angle);
	
	// pow() + sqrt()
	distanceZ=sqrt(pow(distanceX,2)+pow(distanceY,2)); // calculate distance to enemy
	printf("Enemy Distance = %.2f",distanceZ);		
	printf("\nOne missile left\n");
	
	// coordinate to attack
	printf("Enter X coordinate: ");
	scanf("%f",&coX);
	printf("Enter & coordinate: ");
	scanf("%f",&coY);
	
	if(distanceZ>=sqrt(pow(coX,2) + pow(coY,2)-1 ) && distanceZ<=sqrt(pow(coX,2) + pow(coY,2)+1 ))
	 printf("Enemy has been destroyed!!!");
	else printf("Enemy target has escaped, return to base");
	
getch();
return(0);
}
