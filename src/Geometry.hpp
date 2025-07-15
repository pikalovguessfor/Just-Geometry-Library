/*
 *Thanks everyone who using this simple library.
 *Just-Geometry library this is one-header file library.
 *The library allows you to work with operations related to geometric figures. It is divided into several parts.
 */

#pragma once
#include <math.h>

#define PI 3,141592

 /*-------------------------------------------Square and rectangle functions--------------------------------------------------------------*/

/*------1.Square----------*/

int INT_squareOfSquare(int sideOfSquare_A, int sideOfSquare_B) { return sideOfSquare_A * sideOfSquare_B; }
unsigned int UINT_squareOfSquare(unsigned int sideOfSquare_A, unsigned int sideOfSquare_B) { return sideOfSquare_A * sideOfSquare_B; }
float FLO_squareOfSquare(float sideOfSquare_A, float sideOfSquare_B) { return sideOfSquare_A * sideOfSquare_B; }
double DOU_squareOfSquare(double sideOfSquare_A, double sideOfSquare_B) { return sideOfSquare_A * sideOfSquare_B; }


/*------2.Rectangle-------*/

int INT_squareOfRectangle(int sideOfRectangleA, int sideOfRectangleB) { return sideOfRectangleA * sideOfRectangleB; }
unsigned int UINT_squareOfRectangle(unsigned int sideOfRectangleA, unsigned int sideOfRectangleB) { return sideOfRectangleA * sideOfRectangleB; }
float FLO_squareOfRectangle(float sideOfRectangleA, float sideOfRectangleB) { return sideOfRectangleA * sideOfRectangleB; }
double DOU_squareOfRectangle(float sideOfRectangleA, float sideOfRectangleB) { return sideOfRectangleA * sideOfRectangleB; }

 /*-------------------------------------------Triangle functions---------------------------------------------------------------------------*/










 /*-------------------------------------------Ñircle functions------------------------------------------------------------------------------*/

float FLO_areaOfCircle(float radius) {
	return PI * pow(radius, 2.0);
}

double DOU_areaOfCircle(double radius) {
	return PI * pow(radius, 2.0);
}

float FLO_Circumference(float radius) {
	return 2 * PI * radius;
}