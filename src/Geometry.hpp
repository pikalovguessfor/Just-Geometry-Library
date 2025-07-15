/*
 *Thanks everyone who using this simple library.
 *Just-Geometry library this is one-header file library.
 *The library allows you to work with operations related to geometric figures. It is divided into several parts.
 */

#pragma once
#include <math.h>


namespace Geometry{			
	
	/*-------------------------------------------0.Math functions (sin, cos, arcsin etc...)---------------------------------------------------*/

	int INT_Pow(int base, int exponent) { // realisation of pow function

		int result = 1;
		if(exponent > 0) {

    		for (int i = 0; i < exponent; i++) {
        	result *= base;
    		}

		}
		else if(exponent == 0) {
			return 1; 
		}
		else if(exponent < 0){
			return 0; // Negative exponent not supported in this implementation
		}

		return result;
	}
	unsigned int UINT_Pow(unsigned int base, unsigned int exponent) { // realisation of pow function

		unsigned int result = 1;
		if(exponent > 0) {

    		for (unsigned int i = 0; i < exponent; i++) {
        	result *= base;
    		}
			
		}
		else if(exponent == 0) {
			return 1; 
		}
		else if(exponent < 0){
			return 0; // Negative exponent not supported in this implementation
		}

		return result;
	}
	float FLO_Pow(float base, float exponent) { // realisation of pow function

		float result = 1.0;
		if(exponent > 0) {

    		for (int i = 0; i < exponent; i++) {
        	result *= base;
    		}
			
		}
		else if(exponent == 0) {
			return 1; 
		}
		else if(exponent < 0){
			return 0; // Negative exponent not supported in this implementation
		}

		return result;
	}
	double DOU_Pow(double base, double exponent) { // realisation of pow function

		double result = 1.0;
		if(exponent > 0) {

    		for (int i = 0; i < exponent; i++) {
        	result *= base;
    		}
			
		}
		else if(exponent == 0) {
			return 1; 
		}
		else if(exponent < 0){
			return 0; // Negative exponent not supported in this implementation
		}

		return result;
	}


	int INT_sqrt(int number) { // realisation of sqrt function
	}
	unsigned int UINT_sqrt(unsigned int number) { // realisation of sqrt function
	}
	float FLO_sqrt(float number) { // realisation of sqrt function
	}
	double DOU_sqrt(double number) { // realisation of sqrt function
	}


	float FLO_sin() { // realisation of sin function
	} 
	double DOU_sin() { // realisation of sin function
	}


	float FLO_cos() { // realisation of cos function
	}
	double DOU_cos() { // realisation of cos function
	}


	float FLO_arcsin() { // realisation of arcsin function
	}
	double DOU_arcsin() { // realisation of arcsin function
	}

	float FLO_arccos() { // realisation of arccos function
	}
	double DOU_arccos() { // realisation of arccos function
	}

	float FLO_arctan() { // realisation of arctan function
	}
	double DOU_arctan() { // realisation of arctan function
	}

	/*-------------------------------------------1.Constants------------------------------------------------------------------------------------*/

	const int INT_PI = 3; // Define PI constant for integer
	const unsigned int UINT_PI = 3; // Define PI constant for unsigned integer
	const float PI = 3.14159265358979323846f; // Define PI constant
	const double DOU_PI = 3.14159265358979323846; // Define PI constant for double precision

	const int INT_E = 2; // Define E constant for integer
	const unsigned int UINT_E = 2; // Define E constant for unsigned integer
	const float E = 2.71828182845904523536f; // Define E constant
	const double DOU_E = 2.71828182845904523536; // Define E constant for double precision

 	/*-------------------------------------------2.Square--------------------------------------------------------------------------------------*/

	int INT_squareOfSquare(int sideOfSquare_A, int sideOfSquare_B) { 
	return sideOfSquare_A * sideOfSquare_B; 
	}
	unsigned int UINT_squareOfSquare(unsigned int sideOfSquare_A, unsigned int sideOfSquare_B) {
	 return sideOfSquare_A * sideOfSquare_B; 
	}
	float FLO_squareOfSquare(float sideOfSquare_A, float sideOfSquare_B) {
	 return sideOfSquare_A * sideOfSquare_B; 
	}
	double DOU_squareOfSquare(double sideOfSquare_A, double sideOfSquare_B) {
	 return sideOfSquare_A * sideOfSquare_B; 
	}


	/*-------------------------------------------3.Rectangle-----------------------------------------------------------------------------------*/

	int INT_squareOfRectangle(int sideOfRectangleA, int sideOfRectangleB) {
	 return sideOfRectangleA * sideOfRectangleB; 
	}
	unsigned int UINT_squareOfRectangle(unsigned int sideOfRectangleA, unsigned int sideOfRectangleB) {
	 return sideOfRectangleA * sideOfRectangleB; 
	}
	float FLO_squareOfRectangle(float sideOfRectangleA, float sideOfRectangleB) { 
	return sideOfRectangleA * sideOfRectangleB; 
	}
	double DOU_squareOfRectangle(float sideOfRectangleA, float sideOfRectangleB) {
	 return sideOfRectangleA * sideOfRectangleB; 
	}

 	/*-------------------------------------------4.Triangle functions---------------------------------------------------------------------------*/

	/*------1.Triangle square--------*/
	int INT_squareOfTriangle(int base, int height) {
	 return (base * height) / 2; 
	}
	unsigned int UINT_squareOfTriangle(unsigned int base, unsigned int height) {
	 return (base * height) / 2; 
	}
	float FLO_squareOfTriangle(float base, float height) {
	 return (base * height) / 2; 
	}
	double DOU_squareOfTriangle(double base, double height) {
	 return (base * height) / 2; 
	}

	/*------2.Triangle perimeter-------*/
	int INT_perimeterOfTriangle(int sideA, int sideB, int sideC) {
	 return sideA + sideB + sideC; 
	}
	unsigned int UINT_perimeterOfTriangle(unsigned int sideA, unsigned int sideB, unsigned int sideC) {
	 return sideA + sideB + sideC; 
	}
	float FLO_perimeterOfTriangle(float sideA, float sideB, float sideC) {
	 return sideA + sideB + sideC; 
	}
	double DOU_perimeterOfTriangle(double sideA, double sideB, double sideC) {
	 return sideA + sideB + sideC; 
	}

	/*------3.Triangle angle---*/
	float FLO_angleOfTriangle(float sideA, float sideB, float sideC) {
	 return acos((pow(sideB, 2) + pow(sideC, 2) - pow(sideA, 2)) / (2 * sideB * sideC)) * (180.0 / PI);
	}
	double DOU_angleOfTriangle(double sideA, double sideB, double sideC) {
	 return acos((pow(sideB, 2) + pow(sideC, 2) - pow(sideA, 2)) / (2 * sideB * sideC)) * (180.0 / PI);
	}

	/*------4.Side of triangle-*/
	int INT_sideOfTriangle(int angleA, int angleB, int sideC) {
	 return (sideC * sin(angleA * (PI / 180.0))) / sin(angleB * (PI / 180.0));
	}
	unsigned int UINT_sideOfTriangle(unsigned int angleA, unsigned int angleB, unsigned int sideC) {
	 return (sideC * sin(angleA * (PI / 180.0))) / sin(angleB * (PI / 180.0));
	}
	float FLO_sideOfTriangle(float angleA, float angleB, float sideC) {
	 return (sideC * sin(angleA * (PI / 180.0))) / sin(angleB * (PI / 180.0));
	}
	double DOU_sideOfTriangle(double angleA, double angleB, double sideC) {
     return (sideC * sin(angleA * (PI / 180.0))) / sin(angleB * (PI / 180.0));
	}	


 	/*-------------------------------------------5.Circle functions------------------------------------------------------------------------------*/

	float FLO_areaOfCircle(float radius) {
	return PI * pow(radius, 2.0);
	}

	double DOU_areaOfCircle(double radius) {
	return PI * pow(radius, 2.0);
	}

	float FLO_Circumference(float radius) {
	return 2 * PI * radius;
	}
}