#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>



//Function prototypes
int getDecimal(int b3, int b2, int b1, int b0);
int getDecimal2(int b7, int b6, int b5, int b4, int b3, int b2, int b1, int b0);

float get2DDistance(float x1, float y1, float x2, float y2);
int circleIntersect2D(float x1, float y1, float r1, float x2, float y2, float r2);


float get3DDistance(float x1, float y1, float z1, float x2, float y2, float z2);
int circleIntersect3D(float x1, float y1, float z1, float r1, float x2, float y2,float z2, float r2);

char getLetterGrade(int grade);

char evenOrOdd(int number);
int isPowerOf2(int number);
int isPowerOf10(int number);
int findMax(int a, int b, int c);
char getSign(int num);

int isValidTriangle(int a, int b, int c);
char getTriangleType(int a, int b, int c);



int main()
{
	//Pointer Practice



	//Function Practice

	

	printf("\n\n");
	system("pause");
}



//Function Definitions 

int getDecimal(int b3, int b2, int b1, int b0)
{
	//Converts 4 bit binary to decimal
}
int getDecimal2(int b7, int b6, int b5, int b4, int b3, int b2, int b1, int b0)
{
	//Converts 8 bit binary to decimal
}

float get2DDistance(float x1, float y1, float x2, float y2)
{
	//Returns the 2d distance between the centers of the circles
}
int circleIntersect2D(float x1, float y1, float r1, float x2, float y2, float r2)
{
	//Returns 1 if circles intersect 0 if they do not
}


float get3DDistance(float x1, float y1, float z1, float x2, float y2, float z2)
{
	//Returns the 3d distance between centers of circles
}
int circleIntersect3D(float x1, float y1, float z1, float r1, float x2, float y2, float z2, float r2)
{
	//Returns 1 if circles intersect 0 if they do not
}

char getLetterGrade(int grade)
{
	//Returns letter grade in the range of A-E (50 - 100)
}

char evenOrOdd(int number)
{
	//Returns 'e' if number is even and 'o' if odd 
}
int isPowerOf2(int number)
{
	//Returns 1 if number is power of 2 and 0 otherwise
}
int isPowerOf10(int number)
{
	//Returns 1 if number is power of 10 and 0 otherwise
}
int findMax(int a, int b, int c)
{
	//Returns the maximum of a b and c
}
char getSign(int num)
{
	//Returns a + if positive and a - if negative
}

int isValidTriangle(int a, int b, int c)
{
	//Returns 1 if it is a valid triangle and a 0 if not
}
char getTriangleType(int a, int b, int c)
{
	//Returns 'e' if equilateral, 'i' if isosceles, and 's' if scalene
}
