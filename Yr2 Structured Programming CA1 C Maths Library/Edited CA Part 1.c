/* Calculate Roof Lengths and Angles*/

/* Joe O'Regan */
/* 15-11-2015 */

#include<stdio.h>
#include<math.h>

#define PI 3.14159265
#define CTD (PI/180)						// CTD - Convert To Degrees

// function prototypes		
float roofHeight1();						// pow, sqrt
float roofSlope(float x,float y); 			// atan
float chimney();							// cos
float chimHeight(float x, float y);			// sin
float roofHeight2();						// tan

// Global Variables
float roofWidth=0;							// total width of building
float angle=0; 								// angle of roof
float roofHeight=0;							// height of roof
float convert = PI / 180;

int main()
{
    int selection=0;						// menu option

	// Option Menu
	do	
	{
	 printf("*************************************************");	 
	 printf("\n*\tRoof Lengths & Angles (Meters)\t\t*\n");
	 printf("*************************************************\n\n");
     printf("1. Calculate Height Of Roof From Slope Length & Total Width\n");
     printf("2. Calculate Chimney Exit Hole Slope Location\n");
     printf("3. Calculate Height Of Roof From Angle & Total Width\n");
     printf("4. Exit\n");
     printf("\nEnter Selection: ");
     scanf("%d",&selection);    
	              
     switch(selection)
     {
    	case 1: printf("Option 1:\n\n");
				printf("Get Height Of Roof From Slope Length & Total Width\n\n");
    			roofHeight1();
    	break;
     
    	case 2: printf("Option 2:\n\n");
       			printf("Calculate Chimney Exit Hole Through Slope Of Roof \nGiven Dimensions Through Ceiling\n\n");
       			chimney();      
    	break;
     
    	case 3: printf("Option 3:\n\n");
    	    	printf("Calculate Height Of Roof Given Angle & Total Width\n\n");
    	    	roofHeight2();
       	break;     
     }         
 	}while(selection != 4);  
 
	getch ();
	return (0);
}
/****************************************************************************************************
* 									Function 1. Get Height (Sqrt & Pow)								*
****************************************************************************************************/

	float roofHeight1()																				// Calculate: Height of roof, from slope length, and total width of roof
	{
	float slope,halfWidth;																				
	
    printf("Enter Slope Length Of Roof (Meters): ");
	scanf("%f", &slope);																			// Input: Length of Sloped Side of Roof
	printf("Enter Total Width Of Roof (Meters): ");
	scanf("%f", &roofWidth);																		// Input: Total Width of Roof
	
	halfWidth=roofWidth/2;																			// Divide total roof width by 2 (make right angle)
	roofHeight=sqrt(pow(slope,2) - pow(halfWidth,2));												// Formula: opposite equals square root of (hypotenuse squared, minus adjacent squared)
																									// Roof height = square root of (slope squared - half total width squared)
	printf("\nGiven The Slope Length: %.2fm And Width: %.2fm Of A Roof\n",slope,roofWidth);
	printf("1. Roof Height Is %.2fm \n", roofHeight);												// Output: Height of roof (roofHeight)
	printf("2. Roof Center Is %.2fm\n", halfWidth);													// Output: Center of roof (halfWidth)
	printf("3. ");																					// Output: Angle of roof (angle)
	
	roofSlope(halfWidth,roofHeight);
}

/****************************************************************************************************
* 									Funtion 2. Get Angle (Atan)										*
****************************************************************************************************/

float roofSlope(float adjacent,float opposite)  													// Adjacent = half of roof width, Opposite = roof height
{
	angle = atan (opposite / adjacent) * 180 / PI;													// angle = inverse tan of (opposite divided by adjacent) - converted from radians to degrees
	printf ("Slope Angle Is %.2f Degrees\n", angle );												// Output: Angle of roof (angle)
}

/****************************************************************************************************
* 									Function 3. Chimney (Cos)										*
****************************************************************************************************/

float chimney()																						// Calculate: Points chimney will exit sloped part of roof, from ceiling measurements
{	
	float nearSlopeExit, farSlopeExit, distanceAngleToChimney, chimneyWidth;

	printf("Enter Distance From Angle to Chimney Edge at Ceiling Height: ");
    scanf("%f",&distanceAngleToChimney);															// Input: distance at ceiling height from angle of roof to near chimney edge
    printf("Enter Chimney Width: ");
    scanf("%f",&chimneyWidth);																		// Input: The width of the chimney
    printf("Enter Angle Of Roof: ");
    scanf("%f",&angle);																				// Input: The angle of the roof
    
	printf("\n1. Distance From Angle To:");	
							
	nearSlopeExit = distanceAngleToChimney / (cos(angle * CTD));									// Calculate: Distance to near edge of chimney, from angle, on sloped edge
	printf("\n\tA. Near Edge Of Chimney On Slope: %.2fm",nearSlopeExit);							// Output: near point where chimney makes contact with slope of roof (distance from ceiling)
												
	farSlopeExit = (distanceAngleToChimney + chimneyWidth) / cos(angle * CTD);						// Calculate: Distance to far edge of chimney, from angle, on sloped edge (add chimney width)
	printf("\n\tB. Far Edge Of Chimney On Slope: %.2fm\n",farSlopeExit);							// Output: far point where chimney makes contact with slope of roof (distance from ceiling)
	
	printf("2. Height Of Chimney: \n\tA. Nearest To Angle: ");									
	chimHeight(angle,nearSlopeExit);																// Output: Near (to angle) height of chimney, from ceiling to slope part of roof
	printf("\tB. Furthest From Angle: ");															
	chimHeight(angle,farSlopeExit);																	// Output: Far (from angle) height of chimney, from ceiling to slope part of roof
}

/****************************************************************************************************
* 								Function 4. Chimney Heights (Sin)									*
****************************************************************************************************/

float chimHeight(float angle, float hypotenuse)														// Hypotenuse = sloped part of roof
{																									// Calculate: Height of chimney from ceiling to sloped part of roof
	float opposite = hypotenuse * sin(angle * CTD);													// Opposite = side of triangle opposite to sin angle (or height for chimney from ceiling to slope)
	printf("%.2f\n",opposite);																		// Ouput: chimney height, from ceiling to slope
}

/****************************************************************************************************
* 								Function 5. Roof Height (Tan)										*
****************************************************************************************************/

float roofHeight2()																					// Calculate: Height of roof, from roof angle, and width of roof
{
	   	printf("Enter Angle Of Roof: ");
     	scanf("%f",&angle);																			// Input: Roof angle
    	printf("Enter Roof Total Width: ");
    	scanf("%f",&roofWidth);																		// Input: Total width of roof
    	
     	roofHeight = (roofWidth/2) * tan (angle * CTD );											// Calculate: Height is equal to half total width, multiplied by, tan of angle
    	printf("1. Height Of Roof Is: %.2f meters\n\n",roofHeight);									// Output: Height of roof
}

