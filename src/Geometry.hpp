/*
 *Thanks everyone who using this simple library.
 *Just-Geometry library this is one-header file library.
 *The library allows you to work with operations related to geometric figures. It is divided into several parts.
 */

#pragma once


namespace Geometry{			
	/*------------------------------------------------0.Contants-------------------------------------------------------------------*/
	namespace Const { // Constants namespace for mathematical constants
		const int INT_PI = 3; // Define PI constant for integer
		const unsigned int UINT_PI = 3; // Define PI constant for unsigned integer
		const float PI = 3.14159265358979323846f; // Define PI constant
		const double DOU_PI = 3.14159265358979323846; // Define PI constant for double precision

		const int INT_E = 2; // Define E constant for integer
		const unsigned int UINT_E = 2; // Define E constant for unsigned integer
		const float E = 2.71828182845904523536f; // Define E constant
		const double DOU_E = 2.71828182845904523536; // Define E constant for double precision
	}

	/*------------------------------------------------1.Math-----------------------------------------------------------------------*/
	namespace Math {
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
		
			int result = 0;

			for (unsigned int i = 0; i * i <= number; ++i) {
				if (i * i == number) {
					result = i;
					break;
				}
			}
			return result;

		}
		unsigned int UINT_sqrt(unsigned int number) { // realisation of sqrt function

			unsigned int result = 0;

			for (unsigned int i = 0; i * i <= number; ++i) {
				if (i * i == number) {
					result = i;
					break;
				}
			}
			return result;
		}
		float FLO_sqrt(float number) { // realisation of sqrt function

			float result = 0.0;

			for (float i = 0.0f; i * i <= number; i += 0.01f) {
				if (i * i == number) {
					result = i;
					break;
				}
			}

			return result;
	
		}
		double DOU_sqrt(double number) { // realisation of sqrt function

			double result = 0.0;

			for (double i = 0.0; i * i <= number; i += 0.01) {
				if (i * i == number) {
					result = i;
					break;
				}
			}

			return result;
		}

		int INT_cbrt(int number) { // realisation of cbrt function

			int result = 0;

			for (int i = 0; i * i * i <= number; ++i) {
				if (i * i * i == number) {
					result = i;
					break;
				}
			}

			return result;
		}
		unsigned int UINT_cbrt(unsigned int number) { // realisation of cbrt function

			unsigned int result = 0;

			for (unsigned int i = 0; i * i * i <= number; ++i) {
				if (i * i * i == number) {
					result = i;
					break;
				}
			}

			return result;
		}
		float FLO_cbrt(float number) { // realisation of cbrt function

			float result = 0.0;

			for (float i = 0.0f; i * i * i <= number; i += 0.01f) {
				if (i * i * i == number) {
					result = i;
					break;
				}
			}

			return result;
		}
		double DOU_cbrt(double number) { // realisation of cbrt function

			double result = 0.0;

			for (double i = 0.0; i * i * i <= number; i += 0.01) {
				if (i * i * i == number) {
					result = i;
					break;
				}
			}

			return result;
		}


		int INT_Factorial(int number){ // realisation of factorial function

			int result = 1;

			if(number < 0) {
				return 0;
			}
			else if(number == 0 || number == 1) {
				return 1; 
			}
			else if(number > 1) {

				for(int i = 1; i <= number; ++i) {

					result *= i;

				}

			}

			return result;
		}
		unsigned int UINT_Factorial(unsigned int number){ // realisation of factorial function

			unsigned int result = 1;

			if(number < 0) {
				return 0;
			}
			else if(number == 0 || number == 1) {
				return 1; 
			}
			else if(number > 1) {

				for(unsigned int i = 1; i <= number; ++i) {

					result *= i;

				}

			}

			return result;
		}
		float FLO_Factorial(float number){ // realisation of factorial function

			float result = 1.0f;

			if(number < 0) {
				return 0.0f;
			}
			else if(number == 0 || number == 1) {
				return 1.0f; 
			}
			else if(number > 1) {

				for(float i = 1.0f; i <= number; ++i) {

					result *= i;

				}

			}

			return result;
		}
		double DOU_Factorial(double number){ // realisation of factorial function

			double result = 1.0;

			if(number < 0) {
				return 0.0;
			}
			else if(number == 0 || number == 1) {
				return 1.0; 
			}
			else if(number > 1) {

				for(double i = 1.0; i <= number; ++i) {

					result *= i;

				}

			}

			return result;
		}

		float FLO_Hypotenuse(float sideA, float sideB) { // realisation of hypotenuse function

			float result = 0.0;

			result = FLO_sqrt(FLO_Pow(sideA, 2) + FLO_Pow(sideB, 2));

			return result;
		}
		double DOU_Hypotenuse(double sideA, double sideB) { // realisation of hypotenuse function

			double result = 0.0;

			result = DOU_sqrt(DOU_Pow(sideA, 2) + DOU_Pow(sideB, 2));

			return result;
		}

		float FLO_sin(float X) { // realisation of sin function
			
			float result = 0.0;

			const int terms = 10; 
			result = X;  
			float term = X; 

			for (int n = 1; n < terms; ++n) {
				term *= -X * X / ((2 * n) * (2 * n + 1));
				result += term; 
			}

			return result;
		} 
		double DOU_sin(double X) { // realisation of sin function
		
			double result = 0.0;

			const int terms = 10; 
			result = X;  
			double term = X; 

			for (int n = 1; n < terms; ++n) {
				term *= -X * X / ((2 * n) * (2 * n + 1));
				result += term; 
			}

			return result;
			
		}


		float FLO_cos(float X) { // realisation of cos function
			float result = 0.0;
			
			const int terms = 10;
			float term = 1.0f;

			result = 1.0f;

			for (int n = 1; n < terms; ++n) {
				term *= -X * X / ((2 * n - 1) * (2 * n));
				result += term;
			}

			return result;
		}
		double DOU_cos(float X) { // realisation of cos function
			double result = 0.0;
			
			const int terms = 10;
			double term = 1.0;

			result = 1.0;
			for (int n = 1; n < terms; ++n) {
				term *= -X * X / ((2 * n - 1) * (2 * n));
				result += term;
			}

			return result;
		}

		float FLO_tan(float X) { // realisation of tan function

			float result = 0.0;

			if (X == 0.0f) {
				return 0.0f; // tan(0) is 0
			}

			result = FLO_sin(X) / FLO_cos(X);

			return result;
		}
		double DOU_tan(float X) { // realisation of tan function

			double result = 0.0;

			if (X == 0.0) {
				return 0.0; // tan(0) is 0
			}

			result = DOU_sin(X) / DOU_cos(X);

			return result;
		}

		float FLO_arcsin(float X) { // realisation of arcsin function

			float result = 0.0;
			
			if (X < -1.0f || X > 1.0f) {
				return 0.0f; // arcsin is undefined for values outside [-1, 1]
			}

			const int terms = 10;
			result = X;
			float term = X;

			for (int n = 1; n < terms; ++n) {
				term *= (X * X * (2 * n - 1)) / ((2 * n) * (2 * n + 1));
				result += term;
			}
			if (X < 0.0f) {
				result = -result; // arcsin is odd function
			}
			
			return result;
		}
		double DOU_arcsin(float X) { // realisation of arcsin function

			double result = 0.0;
			
			if (X < -1.0 || X > 1.0) {
				return 0.0; // arcsin is undefined for values outside [-1, 1]
			}
			const int terms = 10;
			result = X;
			double term = X;

			for (int n = 1; n < terms; ++n) {
				term *= (X * X * (2 * n - 1)) / ((2 * n) * (2 * n + 1));
				result += term;
			}
			if (X < 0.0) {
				result = -result; // arcsin is odd function
			}

			return result;
		}

		float FLO_arccos(float X) { // realisation of arccos function

			if (X < -1.0f || X > 1.0f) return 0.0f;
    		return Const::PI / 2.0f - FLO_arcsin(X);

		}
		double DOU_arccos(float X) { // realisation of arccos function

			if (X < -1.0 || X > 1.0) return 0.0;
			return Const::PI / 2.0 - DOU_arcsin(X);
		}

		float FLO_arctan(float X) { // realisation of arctan function
			float result = 0.0;
			
			if (X < -1.0f || X > 1.0f) {
				return 0.0f; // arctan is undefined for values outside [-1, 1]
			}

			const int terms = 10;
			result = X;
			float term = X;

			for (int n = 1; n < terms; ++n) {
				term *= -X * X / ((2 * n + 1) * (2 * n));
				result += term;
			}

			return result;
			
		}
		double DOU_arctan(float X) { // realisation of arctan function

			double result = 0.0;
			
			if (X < -1.0 || X > 1.0) {
				return 0.0; // arctan is undefined for values outside [-1, 1]
			}

			const int terms = 10;
			result = X;
			double term = X;

			for (int n = 1; n < terms; ++n) {
				term *= -X * X / ((2 * n + 1) * (2 * n));
				result += term;
			}

			return result;
		}
	}

	/*------------------------------------------------2.Geometry-------------------------------------------------------------------*/
	namespace Geom{

		/*--------------------------------------------1.Square--------------------------------------------------------------------*/
		// Square area
		int INT_SquareArea(int side) { // realisation of square area function
			return side * side;
		}
		long long LON_SquareArea(long long side) { // realisation of square area function
			return side * side;
		}
		float FLO_SquareArea(float side) { // realisation of square area function
			return side * side;
		}
		double DOU_SquareArea(double side) { // realisation of square area function
			return side * side;
		}
		// Square perimeter
		int INT_SquarePerimeter(int side) { // realisation of square perimeter function
			return 4 * side;
		}
		long long LON_SquarePerimeter(long long side) { // realisation of square perimeter function
			return 4 * side;
		}
		float FLO_SquarePerimeter(float side) { // realisation of square perimeter function
			return 4 * side;
		}
		double DOU_SquarePerimeter(double side) { // realisation of square perimeter function
			return 4 * side;
		}
		// Square diagonal
		float FLO_SquareDiagonal(float side) { // realisation of square diagonal function
			return Math::FLO_Hypotenuse(side, side);
		}
		double DOU_SquareDiagonal(double side) { // realisation of square diagonal function
			return Math::DOU_Hypotenuse(side, side);
		}
		/*--------------------------------------------2.Rectangle--------------------------------------------------------------------*/
		// Rectangle area
		int INT_RectangleArea(int width, int height) { // realisation of rectangle area function
			return width * height;
		}
		long long LON_RectangleArea(long long width, long long height) { // realisation of rectangle area function
			return width * height;
		}
		float FLO_RectangleArea(float width, float height) { // realisation of rectangle area function
			return width * height;
		}
		double DOU_RectangleArea(double width, double height) { // realisation of rectangle area function
			return width * height;
		}
		// Rectangle perimeter
		int INT_RectanglePerimeter(int width, int height) { // realisation of rectangle
			return 2 * (width + height);
		}
		long long LON_RectanglePerimeter(long long width, long long height) { // realisation of rectangle perimeter function
			return 2 * (width + height);
		}
		float FLO_RectanglePerimeter(float width, float height) { // realisation of rectangle perimeter function
			return 2 * (width + height);
		}
		double DOU_RectanglePerimeter(double width, double height) { // realisation of rectangle perimeter function
			return 2 * (width + height);
		}
		// Rectangle diagonal
		float FLO_RectangleDiagonal(float width, float height) { // realisation of rectangle diagonal function
			return Math::FLO_Hypotenuse(width, height);
		}
		double DOU_RectangleDiagonal(double width, double height) { // realisation of rectangle diagonal function
			return Math::DOU_Hypotenuse(width, height);
		}
		/*--------------------------------------------3.Triangle--------------------------------------------------------------------*/
		// Triangle area (using base and height)
		int INT_TriangleArea(int base, int height) { // realisation of triangle area
			return (base * height) / 2;
		}
		long long LON_TriangleArea(long long base, long long height) { // realisation of triangle area
			return (base * height) / 2;
		}
		float FLO_TriangleArea(float base, float height) { // realisation of triangle area
			return (base * height) / 2;
		}
		double DOU_TriangleArea(double base, double height) { // realisation of triangle area
			return (base * height) / 2;
		}
		// Triangle perimeter (using lengths of all three sides)
		int INT_TrianglePerimeter(int sideA, int sideB, int sideC) { // realisation of triangle perimeter
			return sideA + sideB + sideC;
		}
		long long LON_TrianglePerimeter(long long sideA, long long sideB, long long sideC) { // realisation of triangle perimeter
			return sideA + sideB + sideC;
		}
		float FLO_TrianglePerimeter(float sideA, float sideB, float sideC) { // realisation of triangle perimeter
			return sideA + sideB + sideC;
		}
		double DOU_TrianglePerimeter(double sideA, double sideB, double sideC) { // realisation of triangle perimeter
			return sideA + sideB + sideC;
		}
		// Triangle hypotenuse (using Pythagorean theorem)
		float FLO_TriangleHypotenuse(float sideA, float sideB) { // realisation of triangle hypotenuse
			return Math::FLO_Hypotenuse(sideA, sideB);
		}
		double DOU_TriangleHypotenuse(double sideA, double sideB) { // realisation of triangle hypotenuse
			return Math::DOU_Hypotenuse(sideA, sideB);
		}
		/*--------------------------------------------4.Circle--------------------------------------------------------------------*/
		// Circle area
		float FLO_CircleArea(float radius) { // realisation of circle area
			return Const::PI * Math::FLO_Pow(radius, 2);
		}
		double DOU_CircleArea(double radius) { // realisation of circle area
			return Const::PI * Math::DOU_Pow(radius, 2);
		}
		// Circle circumference
		float FLO_CircleCircumference(float radius) { // realisation of circle circumference
			return 2 * Const::PI * radius;
		}
		double DOU_CircleCircumference(double radius) { // realisation of circle circumference
			return 2 * Const::PI * radius;
		}
		// Circle diameter
		float FLO_CircleDiameter(float radius) { // realisation of circle diameter
			return 2 * radius;
		}
		double DOU_CircleDiameter(double radius) { // realisation of circle diameter
			return 2 * radius;
		}
		/*--------------------------------------------5.Ellipse--------------------------------------------------------------------*/
		// Ellipse area
		float FLO_EllipseArea(float semiMajorAxis, float semiMinorAxis) { // realisation of ellipse area
			return Const::PI * semiMajorAxis * semiMinorAxis;
		}
		double DOU_EllipseArea(double semiMajorAxis, double semiMinorAxis) { // realisation of ellipse area
			return Const::PI * semiMajorAxis * semiMinorAxis;
		}
		// Ellipse circumference (approximation)
		float FLO_EllipseCircumference(float semiMajorAxis, float semiMinorAxis) { // realisation of ellipse circumference
			return Const::PI * (3 * (semiMajorAxis + semiMinorAxis) - Math::FLO_sqrt((3 * semiMajorAxis + semiMinorAxis) * (semiMajorAxis + 3 * semiMinorAxis)));
		}
		double DOU_EllipseCircumference(double semiMajorAxis, double semiMinorAxis) { // realisation of ellipse circumference
			return Const::PI * (3 * (semiMajorAxis + semiMinorAxis) - Math::DOU_sqrt((3 * semiMajorAxis + semiMinorAxis) * (semiMajorAxis + 3 * semiMinorAxis)));
		}
		// Ellipse major axis
		float FLO_EllipseMajorAxis(float semiMajorAxis) { // realisation of ellipse major axis
			return 2 * semiMajorAxis;
		}
		double DOU_EllipseMajorAxis(double semiMajorAxis) { // realisation of ellipse major axis
			return 2 * semiMajorAxis;
		}
		// Ellipse minor axis
		float FLO_EllipseMinorAxis(float semiMinorAxis) { // realisation of ellipse
			return 2 * semiMinorAxis;
		}
		double DOU_EllipseMinorAxis(double semiMinorAxis) { // realisation of ellipse minor axis
			return 2 * semiMinorAxis;
		}
		/*--------------------------------------------6.Polygon--------------------------------------------------------------------*/
		// Regular polygon area (using side length and number of sides)
		float FLO_PolygonArea(float sideLength, int numSides) { // realisation of polygon area
			return (numSides * Math::FLO_Pow(sideLength, 2)) / (4 * Math::FLO_tan(Const::PI / numSides));
		}
		double DOU_PolygonArea(double sideLength, int numSides) { // realisation of polygon area
			return (numSides * Math::DOU_Pow(sideLength, 2)) / (4 * Math::DOU_tan(Const::PI / numSides));
		}
		// Regular polygon perimeter
		float FLO_PolygonPerimeter(float sideLength, int numSides) { // realisation
			return numSides * sideLength;
		}
		double DOU_PolygonPerimeter(double sideLength, int numSides) { // realisation of polygon perimeter
			return numSides * sideLength;
		}
		// Regular polygon interior angle
		float FLO_PolygonInteriorAngle(int numSides) { // realisation of polygon interior angle
			if (numSides < 3) {
				return 0.0f; // Not a polygon
			}
			return (Const::PI * (numSides - 2)) / numSides;
		}
		double DOU_PolygonInteriorAngle(int numSides) { // realisation of polygon interior angle
			if (numSides < 3) {
				return 0.0; // Not a polygon
			}
			return (Const::PI * (numSides - 2)) / numSides;
		}
		// Regular polygon exterior angle
		float FLO_PolygonExteriorAngle(int numSides) { // realisation of polygon exterior angle
			if (numSides < 3) {
				return 0.0f; // Not a polygon
			}
			return Const::PI - FLO_PolygonInteriorAngle(numSides);
		}
		double DOU_PolygonExteriorAngle(int numSides) { // realisation of polygon exterior angle
			if (numSides < 3) {
				return 0.0; // Not a polygon
			}
			return Const::PI - DOU_PolygonInteriorAngle(numSides);
		}
		/*--------------------------------------------7.Pentagon--------------------------------------------------------------------*/
		// Pentagon area (using side length)
		float FLO_PentagonArea(float sideLength) { // realisation of pentagon area
			return (Math::FLO_Pow(sideLength, 2) * Math::FLO_sqrt(5 * (5 + 2 * Math::FLO_sqrt(5)))) / 4;
		}
		double DOU_PentagonArea(double sideLength) { // realisation of pentagon area
			return (Math::DOU_Pow(sideLength, 2) * Math::DOU_sqrt(5 * (5 + 2 * Math::DOU_sqrt(5)))) / 4;
		}
		// Pentagon perimeter
		float FLO_PentagonPerimeter(float sideLength) { // realisation of pentagon
			return 5 * sideLength;
		}
		double DOU_PentagonPerimeter(double sideLength) { // realisation of pentagon perimeter
			return 5 * sideLength;
		}
		// Pentagon interior angle
		float FLO_PentagonInteriorAngle() { // realisation of pentagon interior angle
			return (3 * Const::PI) / 5;
		}
		double DOU_PentagonInteriorAngle() { // realisation of pentagon interior angle
			return (3 * Const::PI) / 5;
		}
		// Pentagon exterior angle
		float FLO_PentagonExteriorAngle() { // realisation of pentagon exterior angle
			return Const::PI - FLO_PentagonInteriorAngle();
		}
		double DOU_PentagonExteriorAngle() { // realisation of pentagon exterior angle
			return Const::PI - DOU_PentagonInteriorAngle();
		}
		/*--------------------------------------------8.Hexagon--------------------------------------------------------------------*/
		// Hexagon area (using side length)
		float FLO_HexagonArea(float sideLength) { // realisation of hexagon area
			return (3 * Math::FLO_sqrt(3) * Math::FLO_Pow(sideLength, 2)) / 2;
		}
		double DOU_HexagonArea(double sideLength) { // realisation of hexagon area
			return (3 * Math::DOU_sqrt(3) * Math::DOU_Pow(sideLength, 2)) / 2;
		}
		// Hexagon perimeter
		float FLO_HexagonPerimeter(float sideLength) { // realisation of hexagon
			return 6 * sideLength;
		}
		double DOU_HexagonPerimeter(double sideLength) { // realisation of hexagon perimeter
			return 6 * sideLength;
		}
		// Hexagon interior angle
		float FLO_HexagonInteriorAngle() { // realisation of hexagon interior angle
			return (4 * Const::PI) / 6;
		}
		double DOU_HexagonInteriorAngle() { // realisation of hexagon interior angle
			return (4 * Const::PI) / 6;
		}
		// Hexagon exterior angle
		float FLO_HexagonExteriorAngle() { // realisation of hexagon exterior angle
			return Const::PI - FLO_HexagonInteriorAngle();
		}
		double DOU_HexagonExteriorAngle() { // realisation of hexagon exterior angle
			return Const::PI - DOU_HexagonInteriorAngle();
		}
		/*--------------------------------------------9.Octagon--------------------------------------------------------------------*/
		// Octagon area (using side length)
		float FLO_OctagonArea(float sideLength) { // realisation of octagon area
			return 2 * Math::FLO_Pow(sideLength, 2) * (1 + Math::FLO_sqrt(2));
		}
		double DOU_OctagonArea(double sideLength) { // realisation of octagon area
			return 2 * Math::DOU_Pow(sideLength, 2) * (1 + Math::DOU_sqrt(2));
		}
		// Octagon perimeter
		float FLO_OctagonPerimeter(float sideLength) { // realisation of octagon
			return 8 * sideLength;
		}
		double DOU_OctagonPerimeter(double sideLength) { // realisation of octagon perimeter
			return 8 * sideLength;
		}
		// Octagon interior angle
		float FLO_OctagonInteriorAngle() { // realisation of octagon interior angle
			return (6 * Const::PI) / 8;
		}
		double DOU_OctagonInteriorAngle() { // realisation of octagon interior angle
			return (6 * Const::PI) / 8;
		}
		// Octagon exterior angle
		float FLO_OctagonExteriorAngle() { // realisation of octagon exterior angle
			return Const::PI - FLO_OctagonInteriorAngle();
		}
		double DOU_OctagonExteriorAngle() { // realisation of octagon exterior angle
			return Const::PI - DOU_OctagonInteriorAngle();
		}
		/*--------------------------------------------10.Dodecagon--------------------------------------------------------------------*/
		// Dodecagon area (using side length)
		float FLO_DodecagonArea(float sideLength) { // realisation of dodecagon area
			return 3 * Math::FLO_Pow(sideLength, 2) * Math::FLO_sqrt(3);
		}
		double DOU_DodecagonArea(double sideLength) { // realisation of dodecagon area
			return 3 * Math::DOU_Pow(sideLength, 2) * Math::DOU_sqrt(3);
		}
		// Dodecagon perimeter
		float FLO_DodecagonPerimeter(float sideLength) { // realisation of dodecagon
			return 12 * sideLength;
		}
		double DOU_DodecagonPerimeter(double sideLength) { // realisation of dodecagon perimeter
			return 12 * sideLength;
		}
		// Dodecagon interior angle
		float FLO_DodecagonInteriorAngle() { // realisation of dodecagon interior angle
			return (10 * Const::PI) / 12;
		}
		double DOU_DodecagonInteriorAngle() { // realisation of dodecagon interior angle
			return (10 * Const::PI) / 12;
		}
		// Dodecagon exterior angle
		float FLO_DodecagonExteriorAngle() { // realisation of dodecagon
			return Const::PI - FLO_DodecagonInteriorAngle();
		}
		double DOU_DodecagonExteriorAngle() { // realisation of dodecagon exterior angle
			return Const::PI - DOU_DodecagonInteriorAngle();
		}
		/*--------------------------------------------11.Octagram--------------------------------------------------------------------*/
		// Octagram area (using side length)
		float FLO_OctagramArea(float sideLength) { // realisation of octagram area
			return 2 * Math::FLO_Pow(sideLength, 2) * (1 + Math::FLO_sqrt(2));
		}
		double DOU_OctagramArea(double sideLength) { // realisation of octagram area
			return 2 * Math::DOU_Pow(sideLength, 2) * (1 + Math::DOU_sqrt(2));
		}
		// Octagram perimeter
		float FLO_OctagramPerimeter(float sideLength) { // realisation of octagram
			return 8 * sideLength;
		}
		double DOU_OctagramPerimeter(double sideLength) { // realisation of octagram perimeter
			return 8 * sideLength;
		}
		// Octagram interior angle
		float FLO_OctagramInteriorAngle() { // realisation of octagram interior angle
			return (6 * Const::PI) / 8;
		}
		double DOU_OctagramInteriorAngle() { // realisation of octagram interior angle
			return (6 * Const::PI) / 8;
		}
		// Octagram exterior angle
		float FLO_OctagramExteriorAngle() { // realisation of octagram exterior angle
			return Const::PI - FLO_OctagramInteriorAngle();
		}
		double DOU_OctagramExteriorAngle() { // realisation of octagram exterior angle
			return Const::PI - DOU_OctagramInteriorAngle();
		}
		/*--------------------------------------------12.Star--------------------------------------------------------------------*/
		// Star area (using side length and number of points)
		float FLO_StarArea(float sideLength, int numPoints) { // realisation of star area
			if (numPoints < 5) {
				return 0.0f; // Not a valid star
			}
			return (numPoints * Math::FLO_Pow(sideLength, 2)) / (4 * Math::FLO_tan(Const::PI / numPoints));
		}
		double DOU_StarArea(double sideLength, int numPoints) { // realisation of star area
			if (numPoints < 5) {
				return 0.0; // Not a valid star
			}
			return (numPoints * Math::DOU_Pow(sideLength, 2)) / (4 * Math::DOU_tan(Const::PI / numPoints));
		}
		// Star perimeter
		float FLO_StarPerimeter(float sideLength, int numPoints) { // realisation
			if (numPoints < 5) {
				return 0.0f; // Not a valid star
			}
			return numPoints * sideLength;
		}
		double DOU_StarPerimeter(double sideLength, int numPoints) { // realisation of star perimeter
			if (numPoints < 5) {
				return 0.0; // Not a valid star
			}
			return numPoints * sideLength;
		}
		// Star interior angle
		float FLO_StarInteriorAngle(int numPoints) { // realisation of star interior angle
			if (numPoints < 5) {
				return 0.0f; // Not a valid star
			}
			return (Const::PI * (numPoints - 2)) / numPoints;
		}
		double DOU_StarInteriorAngle(int numPoints) { // realisation of star interior angle
			if (numPoints < 5) {
				return 0.0; // Not a valid star
			}
			return (Const::PI * (numPoints - 2)) / numPoints;
		}
		// Star exterior angle
		float FLO_StarExteriorAngle(int numPoints) { // realisation of star exterior angle
			if (numPoints < 5) {
				return 0.0f; // Not a valid star
			}
			return Const::PI - FLO_StarInteriorAngle(numPoints);
		}
		double DOU_StarExteriorAngle(int numPoints) { // realisation of star exterior angle
			if (numPoints < 5) {
				return 0.0; // Not a valid star
			}
			return Const::PI - DOU_StarInteriorAngle(numPoints);
		}
		/*--------------------------------------------13.Cylinder--------------------------------------------------------------------*/
		// Cylinder volume
		float FLO_CylinderVolume(float radius, float height) { // realisation of cylinder volume
			return Const::PI * Math::FLO_Pow(radius, 2) * height;
		}
		double DOU_CylinderVolume(double radius, double height) { // realisation of cylinder volume
			return Const::PI * Math::DOU_Pow(radius, 2) * height;
		}
		// Cylinder surface area
		float FLO_CylinderSurfaceArea(float radius, float height) { // realisation of cylinder surface area
			return 2 * Const::PI * radius * (radius + height);
		}
		double DOU_CylinderSurfaceArea(double radius, double height) { // realisation of cylinder surface area
			return 2 * Const::PI * radius * (radius + height);
		}
		// Cylinder lateral surface area
		float FLO_CylinderLateralSurfaceArea(float radius, float height) { // realisation of cylinder lateral surface area
			return 2 * Const::PI * radius * height;
		}
		double DOU_CylinderLateralSurfaceArea(double radius, double height) { // realisation of cylinder lateral surface area
			return 2 * Const::PI * radius * height;
		}
		// Cylinder base area
		float FLO_CylinderBaseArea(float radius) { // realisation of cylinder base area
			return Const::PI * Math::FLO_Pow(radius, 2);
		}
		double DOU_CylinderBaseArea(double radius) { // realisation of cylinder base area
			return Const::PI * Math::DOU_Pow(radius, 2);
		}
		// Cylinder height from volume and radius
		float FLO_CylinderHeightFromVolume(float volume, float radius) { // realisation of cylinder height from volume and radius
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return volume / (Const::PI * Math::FLO_Pow(radius, 2));
		}
		double DOU_CylinderHeightFromVolume(double volume, double radius) { // realisation of cylinder height from volume and radius
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return volume / (Const::PI * Math::DOU_Pow(radius, 2));
		}
		// Cylinder radius from volume and height
		float FLO_CylinderRadiusFromVolume(float volume, float height) { // realisation of
			if (height <= 0) {
				return 0.0f; // Invalid height
			}
			return Math::FLO_sqrt(volume / (Const::PI * height));
		}
		double DOU_CylinderRadiusFromVolume(double volume, double height) { // realisation of cylinder radius from volume and height
			if (height <= 0) {
				return 0.0; // Invalid height
			}
			return Math::DOU_sqrt(volume / (Const::PI * height));
		}
		/*--------------------------------------------14.Cone--------------------------------------------------------------------*/
		// Cone volume
		float FLO_ConeVolume(float radius, float height) { // realisation of cone volume
			return (1.0f / 3.0f) * Const::PI * Math::FLO_Pow(radius, 2) * height;
		}
		double DOU_ConeVolume(double radius, double height) { // realisation of cone volume
			return (1.0 / 3.0) * Const::PI * Math::DOU_Pow(radius, 2) * height;
		}
		// Cone surface area
		float FLO_ConeSurfaceArea(float radius, float slantHeight) { // realisation of cone surface area
			return Const::PI * radius * (radius + slantHeight);
		}
		double DOU_ConeSurfaceArea(double radius, double slantHeight) { // realisation of cone surface area
			return Const::PI * radius * (radius + slantHeight);
		}
		// Cone lateral surface area
		float FLO_ConeLateralSurfaceArea(float radius, float slantHeight) { // realisation of cone lateral surface area
			return Const::PI * radius * slantHeight;
		}
		double DOU_ConeLateralSurfaceArea(double radius, double slantHeight) { // realisation of cone lateral surface area
			return Const::PI * radius * slantHeight;
		}
		// Cone base area
		float FLO_ConeBaseArea(float radius) { // realisation of cone base area
			return Const::PI * Math::FLO_Pow(radius, 2);
		}
		double DOU_ConeBaseArea(double radius) { // realisation of cone base area
			return Const::PI * Math::DOU_Pow(radius, 2);
		}
		// Cone height from volume and radius
		float FLO_ConeHeightFromVolume(float volume, float radius) { // realisation of cone height from volume and radius
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return (3 * volume) / (Const::PI * Math::FLO_Pow(radius, 2));
		}
		double DOU_ConeHeightFromVolume(double volume, double radius) { // realisation of cone height from volume and radius
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return (3 * volume) / (Const::PI * Math::DOU_Pow(radius, 2));
		}
		// Cone radius from volume and height
		float FLO_ConeRadiusFromVolume(float volume, float height) { // realisation of cone radius from volume and height
			if (height <= 0) {
				return 0.0f; // Invalid height
			}
			return Math::FLO_sqrt((3 * volume) / (Const::PI * height));
		}
		double DOU_ConeRadiusFromVolume(double volume, double height) { // realisation of cone radius from volume and height
			if (height <= 0) {
				return 0.0; // Invalid height
			}
			return Math::DOU_sqrt((3 * volume) / (Const::PI * height));
		}
		/*--------------------------------------------15.Sphere--------------------------------------------------------------------*/
		// Sphere volume
		float FLO_SphereVolume(float radius) { // realisation of sphere volume
			return (4.0f / 3.0f) * Const::PI * Math::FLO_Pow(radius, 3);
		}
		double DOU_SphereVolume(double radius) { // realisation of sphere volume
			return (4.0 / 3.0) * Const::PI * Math::DOU_Pow(radius, 3);
		}
		// Sphere surface area
		float FLO_SphereSurfaceArea(float radius) { // realisation of sphere surface area
			return 4 * Const::PI * Math::FLO_Pow(radius, 2);
		}
		double DOU_SphereSurfaceArea(double radius) { // realisation of sphere surface area
			return 4 * Const::PI * Math::DOU_Pow(radius, 2);
		}
		// Sphere radius from volume
		float FLO_SphereRadiusFromVolume(float volume) { // realisation of sphere radius from volume
			if (volume <= 0) {
				return 0.0f; // Invalid volume
			}
			return Math::FLO_cbrt((3 * volume) / (4 * Const::PI));
		}
		double DOU_SphereRadiusFromVolume(double volume) { // realisation of sphere radius from volume
			if (volume <= 0) {
				return 0.0; // Invalid volume
			}
			return Math::DOU_cbrt((3 * volume) / (4 * Const::PI));
		}

		/*--------------------------------------------16.Triangle--------------------------------------------------------------------*/
		// Triangle area (using base and height)
		float FLO_TriangleArea(float base, float height) { // realisation of triangle area
			return (base * height) / 2;
		}
		double DOU_TriangleArea(double base, double height) { // realisation of triangle area
			return (base * height) / 2;
		}
		// Triangle perimeter (using lengths of all three sides)
		float FLO_TrianglePerimeter(float sideA, float sideB, float sideC) { // realisation of triangle perimeter
			return sideA + sideB + sideC;
		}
		double DOU_TrianglePerimeter(double sideA, double sideB, double sideC) { // realisation of triangle perimeter
			return sideA + sideB + sideC;
		}
		// Triangle hypotenuse (using Pythagorean theorem)
		float FLO_TriangleHypotenuse(float sideA, float sideB) { // realisation of triangle hypotenuse
			return Math::FLO_Hypotenuse(sideA, sideB);
		}
		double DOU_TriangleHypotenuse(double sideA, double sideB) { // realisation of triangle hypotenuse
			return Math::DOU_Hypotenuse(sideA, sideB);
		}
		// Triangle median (using lengths of all three sides)
		float FLO_TriangleMedian(float sideA, float sideB, float sideC) { // realisation of triangle median
			return Math::FLO_sqrt((2 * Math::FLO_Pow(sideA, 2) + 2 * Math::FLO_Pow(sideB, 2) - Math::FLO_Pow(sideC, 2)) / 4);
		}
		double DOU_TriangleMedian(double sideA, double sideB, double sideC) { // realisation of triangle median
			return Math::DOU_sqrt((2 * Math::DOU_Pow(sideA, 2) + 2 * Math::DOU_Pow(sideB, 2) - Math::DOU_Pow(sideC, 2)) / 4);
		}
		// Triangle altitude (using base and height)
		float FLO_TriangleAltitude(float base, float area) { // realisation of triangle altitude
			if (base <= 0) {
				return 0.0f; // Invalid base
			}
			return (2 * area) / base;
		}
		double DOU_TriangleAltitude(double base, double area) { // realisation of triangle altitude
			if (base <= 0) {
				return 0.0; // Invalid base
			}
			return (2 * area) / base;
		}
		// Triangle circumradius (using lengths of all three sides)
		float FLO_TriangleCircumradius(float sideA, float sideB, float sideC) { // realisation of triangle circumradius
			float semiPerimeter = (sideA + sideB + sideC) / 2;
			return (sideA * sideB * sideC) / (4 * Math::FLO_sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC)));
		}
		double DOU_TriangleCircumradius(double sideA, double sideB, double sideC) { // realisation of triangle circumradius
			double semiPerimeter = (sideA + sideB + sideC) / 2;
			return (sideA * sideB * sideC) / (4 * Math::DOU_sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC)));
		}
		// Triangle inradius (using lengths of all three sides)
		float FLO_TriangleInradius(float sideA, float sideB, float sideC) { // realisation of triangle inradius
			float semiPerimeter = (sideA + sideB + sideC) / 2;
			return Math::FLO_sqrt((semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC) / semiPerimeter);
		}
		double DOU_TriangleInradius(double sideA, double sideB, double sideC) { // realisation of triangle inradius
			double semiPerimeter = (sideA + sideB + sideC) / 2;
			return Math::DOU_sqrt((semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC) / semiPerimeter);
		}
		// Triangle centroid (using lengths of all three sides)
		float FLO_TriangleCentroid(float sideA, float sideB, float sideC){ // realisation of triangle centroid
			return (sideA + sideB + sideC) / 3;
		}
		double DOU_TriangleCentroid(double sideA, double sideB, double sideC){ // realisation of triangle centroid
			return (sideA + sideB + sideC) / 3;
		}
		// Triangle orthocenter (using lengths of all three sides)
		float FLO_TriangleOrthocenter(float sideA, float sideB, float sideC){ // realisation of triangle orthocenter
			float semiPerimeter = (sideA + sideB + sideC) / 2;
			return (2 * Math::FLO_sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC))) / (sideA + sideB + sideC);
		}
		double DOU_TriangleOrthocenter(double sideA, double sideB, double sideC){ // realisation of triangle orthocenter
			double semiPerimeter = (sideA + sideB + sideC) / 2;
			return (2 * Math::DOU_sqrt(semiPerimeter * (semiPerimeter - sideA) * (semiPerimeter - sideB) * (semiPerimeter - sideC))) / (sideA + sideB + sideC);
		}
		/*--------------------------------------------17.Polygon--------------------------------------------------------------------*/
		// Regular polygon area (using side length and number of sides)
		float FLO_PolygonArea(float sideLength, int numSides) { // realisation of polygon area
			if (numSides < 3) {
				return 0.0f; // Not a polygon
			}
			return (numSides * Math::FLO_Pow(sideLength, 2)) / (4 * Math::FLO_tan(Const::PI / numSides));
		}
		double DOU_PolygonArea(double sideLength, int numSides) { // realisation of polygon area
			if (numSides < 3) {
				return 0.0; // Not a polygon
			}
			return (numSides * Math::DOU_Pow(sideLength, 2)) / (4 * Math::DOU_tan(Const::PI / numSides));
		}
		// Regular polygon perimeter
		float FLO_PolygonPerimeter(float sideLength, int numSides) { // realisation
			if (numSides < 3) {
				return 0.0f; // Not a polygon
			}
			return numSides * sideLength;
		}
		double DOU_PolygonPerimeter(double sideLength, int numSides) { // realisation of polygon perimeter
			if (numSides < 3) {
				return 0.0; // Not a polygon
			}
			return numSides * sideLength;
		}
		// Regular polygon interior angle
		float FLO_PolygonInteriorAngle(int numSides) { // realisation of polygon interior angle
			if (numSides < 3) {
				return 0.0f; // Not a polygon
			}
			return (Const::PI * (numSides - 2)) / numSides;
		}
		double DOU_PolygonInteriorAngle(int numSides) { // realisation of polygon interior angle
			if (numSides < 3) {
				return 0.0; // Not a polygon
			}
			return (Const::PI * (numSides - 2)) / numSides;
		}
		// Regular polygon exterior angle
		float FLO_PolygonExteriorAngle(int numSides) { // realisation of polygon exterior angle
			if (numSides < 3) {
				return 0.0f; // Not a polygon
			}
			return Const::PI - FLO_PolygonInteriorAngle(numSides);
		}
		double DOU_PolygonExteriorAngle(int numSides) { // realisation of polygon exterior angle
			if (numSides < 3) {
				return 0.0; // Not a polygon
			}
			return Const::PI - DOU_PolygonInteriorAngle(numSides);
		}
		// Regular polygon circumradius (using side length and number of sides)
		float FLO_PolygonCircumradius(float sideLength, int numSides) { // realisation of polygon circumradius
			if (numSides < 3) {
				return 0.0f; // Not a polygon
			}
			return sideLength / (2 * Math::FLO_sin(Const::PI / numSides));
		}
		double DOU_PolygonCircumradius(double sideLength, int numSides) { // realisation of polygon circumradius
			if (numSides < 3) {
				return 0.0; // Not a polygon
			}
			return sideLength / (2 * Math::DOU_sin(Const::PI / numSides));
		}
		// Regular polygon inradius (using side length and number of sides)
		float FLO_PolygonInradius(float sideLength, int numSides) { // realisation
			if (numSides < 3) {
				return 0.0f; // Not a polygon
			}
			return sideLength / (2 * Math::FLO_tan(Const::PI / numSides));
		}
		double DOU_PolygonInradius(double sideLength, int numSides) { // realisation of polygon inradius
			if (numSides < 3) {
				return 0.0; // Not a polygon
			}
			return sideLength / (2 * Math::DOU_tan(Const::PI / numSides));
		}
		// Regular polygon apothem (using side length and number of sides)
		float FLO_PolygonApothem(float sideLength, int numSides) { // realisation of polygon apothem
			if (numSides < 3) {
				return 0.0f; // Not a polygon
			}
			return sideLength / (2 * Math::FLO_tan(Const::PI / numSides));
		}
		double DOU_PolygonApothem(double sideLength, int numSides) { // realisation of polygon apothem
			if (numSides < 3) {
				return 0.0; // Not a polygon
			}
			return sideLength / (2 * Math::DOU_tan(Const::PI / numSides));
		}
		// Regular polygon circumcircle radius (using side length and number of sides)
		float FLO_PolygonCircumcircleRadius(float sideLength, int numSides) { // realisation of polygon circumcircle radius
			if (numSides < 3) {
				return 0.0f; // Not a polygon
			}
			return sideLength / (2 * Math::FLO_sin(Const::PI / numSides));
		}
		double DOU_PolygonCircumcircleRadius(double sideLength, int numSides) { // realisation of polygon circumcircle radius
			if (numSides < 3) {
				return 0.0; // Not a polygon
			}
			return sideLength / (2 * Math::DOU_sin(Const::PI / numSides));
		}
		// Regular polygon incircle radius (using side length and number of sides)
		float FLO_PolygonIncircleRadius(float sideLength, int numSides) { // realisation of polygon incircle radius
			if (numSides < 3) {
				return 0.0f; // Not a polygon
			}
			return sideLength / (2 * Math::FLO_tan(Const::PI / numSides));
		}
		double DOU_PolygonIncircleRadius(double sideLength, int numSides) { // realisation of polygon incircle radius
			if (numSides < 3) {
				return 0.0; // Not a polygon
			}
			return sideLength / (2 * Math::DOU_tan(Const::PI / numSides));
		}
		/*--------------------------------------------18.Ellipse--------------------------------------------------------------------*/
		// Ellipse area (using semi-major and semi-minor axes)
		float FLO_EllipseArea(float semiMajorAxis, float semiMinorAxis) { // realisation of ellipse area
			return Const::PI * semiMajorAxis * semiMinorAxis;
		}
		double DOU_EllipseArea(double semiMajorAxis, double semiMinorAxis) { // realisation of ellipse area
			return Const::PI * semiMajorAxis * semiMinorAxis;
		}
		// Ellipse perimeter (approximation using Ramanujan's formula)
		float FLO_EllipsePerimeter(float semiMajorAxis, float semiMinorAxis) { // realisation of ellipse perimeter
			return Const::PI * (3 * (semiMajorAxis + semiMinorAxis) - Math::FLO_sqrt((3 * semiMajorAxis + semiMinorAxis) * (semiMajorAxis + 3 * semiMinorAxis)));
		}
		double DOU_EllipsePerimeter(double semiMajorAxis, double semiMinorAxis) { // realisation of ellipse perimeter
			return Const::PI * (3 * (semiMajorAxis + semiMinorAxis) - Math::DOU_sqrt((3 * semiMajorAxis + semiMinorAxis) * (semiMajorAxis + 3 * semiMinorAxis)));
		}
		// Ellipse focal distance (using semi-major and semi-minor axes)
		float FLO_EllipseFocalDistance(float semiMajorAxis, float semiMinorAxis) { // realisation of ellipse focal distance
			return Math::FLO_sqrt(Math::FLO_Pow(semiMajorAxis, 2) - Math::FLO_Pow(semiMinorAxis, 2));
		}
		double DOU_EllipseFocalDistance(double semiMajorAxis, double semiMinorAxis) { // realisation of ellipse focal distance
			return Math::DOU_sqrt(Math::DOU_Pow(semiMajorAxis, 2) - Math::DOU_Pow(semiMinorAxis, 2));
		}
		// Ellipse eccentricity (using semi-major and semi-minor axes)
		float FLO_EllipseEccentricity(float semiMajorAxis, float semiMinorAxis
		) { // realisation of ellipse eccentricity
			if (semiMajorAxis <= 0 || semiMinorAxis <= 0) {
				return 0.0f; // Invalid axes
			}
			return Math::FLO_sqrt(1 - Math::FLO_Pow(semiMinorAxis / semiMajorAxis, 2));
		}
		double DOU_EllipseEccentricity(double semiMajorAxis, double semiMinorAxis) { // realisation of ellipse eccentricity
			if (semiMajorAxis <= 0 || semiMinorAxis <= 0) {
				return 0.0; // Invalid axes
			}
			return Math::DOU_sqrt(1 - Math::DOU_Pow(semiMinorAxis / semiMajorAxis, 2));
		}
		// Ellipse major axis length
		float FLO_EllipseMajorAxisLength(float semiMajorAxis) { // realisation of
			if (semiMajorAxis <= 0) {
				return 0.0f; // Invalid semi-major axis
			}
			return 2 * semiMajorAxis;
		}
		double DOU_EllipseMajorAxisLength(double semiMajorAxis) { // realisation of ellipse major axis length
			if (semiMajorAxis <= 0) {
				return 0.0; // Invalid semi-major axis
			}
			return 2 * semiMajorAxis;
		}
		// Ellipse minor axis length
		float FLO_EllipseMinorAxisLength(float semiMinorAxis) { // realisation of ellipse minor axis length
			if (semiMinorAxis <= 0) {
				return 0.0f; // Invalid semi-minor axis
			}
			return 2 * semiMinorAxis;
		}
		double DOU_EllipseMinorAxisLength(double semiMinorAxis) { // realisation of ellipse minor axis length
			if (semiMinorAxis <= 0) {
				return 0.0; // Invalid semi-minor axis
			}
			return 2 * semiMinorAxis;
		}
		// Ellipse focal points (using semi-major and semi-minor axes)
		float FLO_EllipseFocalPoints(float semiMajorAxis, float semiMinorAxis) { // realisation of ellipse focal points
			if (semiMajorAxis <= 0 || semiMinorAxis <= 0) {
				return 0.0f; // Invalid axes
			}
			return Math::FLO_sqrt(Math::FLO_Pow(semiMajorAxis, 2) - Math::FLO_Pow(semiMinorAxis, 2));
		}
		double DOU_EllipseFocalPoints(double semiMajorAxis, double semiMinorAxis) { // realisation of ellipse focal points
			if (semiMajorAxis <= 0 || semiMinorAxis <= 0) {
				return 0.0; // Invalid axes
			}
			return Math::DOU_sqrt(Math::DOU_Pow(semiMajorAxis, 2) - Math::DOU_Pow(semiMinorAxis, 2));
		}
		// Ellipse center (using semi-major and semi-minor axes)
		float FLO_EllipseCenter(float semiMajorAxis, float semiMinorAxis) { // realisation of ellipse center
			if (semiMajorAxis <= 0 || semiMinorAxis <= 0) {
				return 0.0f; // Invalid axes
			}
			return (semiMajorAxis + semiMinorAxis) / 2;
		}
		double DOU_EllipseCenter(double semiMajorAxis, double semiMinorAxis) { // realisation of ellipse center
			if (semiMajorAxis <= 0 || semiMinorAxis <= 0) {
				return 0.0; // Invalid axes
			}
			return (semiMajorAxis + semiMinorAxis) / 2;
		}
		/*--------------------------------------------18.Circle--------------------------------------------------------------------*/
		// Circle area (using radius)
		float FLO_CircleArea(float radius) { // realisation of circle area
			return Const::PI * Math::FLO_Pow(radius, 2);
		}
		double DOU_CircleArea(double radius) { // realisation of circle area
			return Const::PI * Math::DOU_Pow(radius, 2);
		}
		// Circle circumference (perimeter)
		float FLO_CircleCircumference(float radius) { // realisation of circle circumference
			return 2 * Const::PI * radius;
		}
		double DOU_CircleCircumference(double radius) { // realisation of circle circumference
			return 2 * Const::PI * radius;
		}
		// Circle diameter
		float FLO_CircleDiameter(float radius) { // realisation of circle diameter
			return 2 * radius;
		}
		double DOU_CircleDiameter(double radius) { // realisation of circle diameter
			return 2 * radius;
		}
		// Circle radius from area
		float FLO_CircleRadiusFromArea(float area) { // realisation of circle radius from area
			if (area <= 0) {
				return 0.0f; // Invalid area
			}
			return Math::FLO_sqrt(area / Const::PI);
		}
		double DOU_CircleRadiusFromArea(double area) { // realisation of circle radius from area
			if (area <= 0) {
				return 0.0; // Invalid area
			}
			return Math::DOU_sqrt(area / Const::PI);
		}
		// Circle radius from circumference
		float FLO_CircleRadiusFromCircumference(float circumference) { // realisation of circle radius from circumference
			if (circumference <= 0) {
				return 0.0f; // Invalid circumference
			}
			return circumference / (2 * Const::PI);
		}
		double DOU_CircleRadiusFromCircumference(double circumference) { // realisation of circle radius from circumference
			if (circumference <= 0) {
				return 0.0; // Invalid circumference
			}
			return circumference / (2 * Const::PI);
		}
		// Circle arc length (using radius and angle in radians)
		float FLO_CircleArcLength(float radius, float angle) { // realisation of circle
			if (radius <= 0 || angle < 0) {
				return 0.0f; // Invalid radius or angle
			}
			return radius * angle;
		}
		double DOU_CircleArcLength(double radius, double angle) { // realisation of circle arc length
			if (radius <= 0 || angle < 0) {
				return 0.0; // Invalid radius or angle
			}
			return radius * angle;
		}
		// Circle sector area (using radius and angle in radians)
		float FLO_CircleSectorArea(float radius, float angle) { // realisation of circle
			if (radius <= 0 || angle < 0) {
				return 0.0f; // Invalid radius or angle
			}
			return (angle / 2) * radius * radius;
		}
		double DOU_CircleSectorArea(double radius, double angle) { // realisation of circle sector area
			if (radius <= 0 || angle < 0) {
				return 0.0; // Invalid radius or angle
			}
			return (angle / 2) * radius * radius;
		}
		// Circle chord length (using radius and angle in radians)
		float FLO_CircleChordLength(float radius, float angle) { // realisation of circle chord length
			if (radius <= 0 || angle < 0) {
				return 0.0f; // Invalid radius or angle
			}
			return 2 * radius * Math::FLO_sin(angle / 2);
		}
		double DOU_CircleChordLength(double radius, double angle) { // realisation of circle chord length
			if (radius <= 0 || angle < 0) {
				return 0.0; // Invalid radius or angle
			}
			return 2 * radius * Math::DOU_sin(angle / 2);
		}
		// Circle inscribed square side length (using radius)
		float FLO_CircleInscribedSquareSideLength(float radius) { // realisation of circle
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(2);
		}
		double DOU_CircleInscribedSquareSideLength(double radius) { // realisation of circle inscribed square side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(2);
		}
		// Circle circumscribed square side length (using radius)
		float FLO_CircleCircumscribedSquareSideLength(float radius) { // realisation of circle circumscribed square side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * 2;
		}
		double DOU_CircleCircumscribedSquareSideLength(double radius) { // realisation of circle circumscribed square side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * 2;
		}
		// Circle inscribed triangle side length (using radius)
		float FLO_CircleInscribedTriangleSideLength(float radius) { // realisation of circle
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(3);
		}
		double DOU_CircleInscribedTriangleSideLength(double radius) { // realisation of circle inscribed triangle side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(3);
		}
		// Circle circumscribed triangle side length (using radius)
		float FLO_CircleCircumscribedTriangleSideLength(float radius) { // realisation of circle circumscribed triangle side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * 2;
		}
		double DOU_CircleCircumscribedTriangleSideLength(double radius) { // realisation of circle circumscribed triangle side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * 2;
		}
		// Circle inscribed pentagon side length (using radius)
		float FLO_CircleInscribedPentagonSideLength(float radius) { // realisation of circle inscribed pentagon side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(5 + 2 * Math::FLO_sqrt(5));
		}
		double DOU_CircleInscribedPentagonSideLength(double radius) { // realisation of circle inscribed pentagon side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(5 + 2 * Math::DOU_sqrt(5));
		}
		// Circle circumscribed pentagon side length (using radius)
		float FLO_CircleCircumscribedPentagonSideLength(float radius) { // realisation of circle circumscribed pentagon side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(5 + 2 * Math::FLO_sqrt(5));
		}
		double DOU_CircleCircumscribedPentagonSideLength(double radius) { // realisation of circle circumscribed pentagon side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(5 + 2 * Math::DOU_sqrt(5));
		}
		// Circle inscribed hexagon side length (using radius)
		float FLO_CircleInscribedHexagonSideLength(float radius) { // realisation of circle inscribed hexagon side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius;
		}
		double DOU_CircleInscribedHexagonSideLength(double radius) { // realisation of circle inscribed hexagon side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius;
		}
		// Circle circumscribed hexagon side length (using radius)
		float FLO_CircleCircumscribedHexagonSideLength(float radius) { // realisation of circle circumscribed hexagon side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(3);
		}
		double DOU_CircleCircumscribedHexagonSideLength(double radius) { // realisation of circle circumscribed hexagon side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(3);
		}
		// Circle inscribed octagon side length (using radius)
		float FLO_CircleInscribedOctagonSideLength(float radius) { // realisation of circle inscribed octagon side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(2 + Math::FLO_sqrt(2));
		}
		double DOU_CircleInscribedOctagonSideLength(double radius) { // realisation of circle inscribed octagon side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(2 + Math::DOU_sqrt(2));
		}
		// Circle circumscribed octagon side length (using radius)
		float FLO_CircleCircumscribedOctagonSideLength(float radius) { // realisation of circle circumscribed octagon side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(2 + Math::FLO_sqrt(2));
		}
		double DOU_CircleCircumscribedOctagonSideLength(double radius) { // realisation of circle circumscribed octagon side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(2 + Math::DOU_sqrt(2));
		}
		// Circle inscribed decagon side length (using radius)
		float FLO_CircleInscribedDecagonSideLength(float radius) { // realisation of circle inscribed decagon side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(5 + 2 * Math::FLO_sqrt(5));
		}
		double DOU_CircleInscribedDecagonSideLength(double radius) { // realisation of circle inscribed decagon side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(5 + 2 * Math::DOU_sqrt(5));
		}
		// Circle circumscribed decagon side length (using radius)
		float FLO_CircleCircumscribedDecagonSideLength(float radius) { // realisation of circle circumscribed decagon side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(5 + 2 * Math::FLO_sqrt(5));
		}
		double DOU_CircleCircumscribedDecagonSideLength(double radius) { // realisation of circle circumscribed decagon side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(5 + 2 * Math::DOU_sqrt(5));
		}
		// Circle inscribed dodecagon side length (using radius)
		float FLO_CircleInscribedDodecagonSideLength(float radius) { // realisation of circle inscribed dodecagon side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(3 + 2 * Math::FLO_sqrt(3));
		}
		double DOU_CircleInscribedDodecagonSideLength(double radius) { // realisation of circle inscribed dodecagon side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(3 + 2 * Math::DOU_sqrt(3));
		}
		// Circle circumscribed dodecagon side length (using radius)
		float FLO_CircleCircumscribedDodecagonSideLength(float radius) { // realisation of circle circumscribed dodecagon side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(3 + 2 * Math::FLO_sqrt(3));
		}
		double DOU_CircleCircumscribedDodecagonSideLength(double radius) { // realisation of circle circumscribed dodecagon side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(3 + 2 * Math::DOU_sqrt(3));
		}
		// Circle inscribed ellipse semi-major axis (using radius)
		float FLO_CircleInscribedEllipseSemiMajorAxis(float radius) { // realisation of circle inscribed ellipse semi-major axis
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius;
		}
		double DOU_CircleInscribedEllipseSemiMajorAxis(double radius) { // realisation of circle inscribed ellipse semi-major axis
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius;
		}
		// Circle circumscribed ellipse semi-major axis (using radius)
		float FLO_CircleCircumscribedEllipseSemiMajorAxis(float radius) { // realisation of circle circumscribed ellipse semi-major axis
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(2);
		}
		double DOU_CircleCircumscribedEllipseSemiMajorAxis(double radius) { // realisation of circle circumscribed ellipse semi-major axis
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(2);
		}
		// Circle inscribed ellipse semi-minor axis (using radius)
		float FLO_CircleInscribedEllipseSemiMinorAxis(float radius) { // realisation of circle inscribed ellipse semi-minor axis
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(2);
		}
		double DOU_CircleInscribedEllipseSemiMinorAxis(double radius) { // realisation of circle inscribed ellipse semi-minor axis
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(2);
		}
		// Circle circumscribed ellipse semi-minor axis (using radius)
		float FLO_CircleCircumscribedEllipseSemiMinorAxis(float radius) { // realisation of circle circumscribed ellipse semi-minor axis
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(2);
		}
		double DOU_CircleCircumscribedEllipseSemiMinorAxis(double radius) { // realisation of circle circumscribed ellipse semi-minor axis
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(2);
		}
		// Circle inscribed triangle side length (using radius)
		float FLO_CircleInscribedTriangleSideLength(float radius) { // realisation of circle inscribed triangle side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(3);
		}
		double DOU_CircleInscribedTriangleSideLength(double radius) { // realisation of circle inscribed triangle side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(3);
		}
		// Circle circumscribed triangle side length (using radius)
		float FLO_CircleCircumscribedTriangleSideLength(float radius) { // realisation of circle circumscribed triangle side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * 2;
		}
		double DOU_CircleCircumscribedTriangleSideLength(double radius) { // realisation of circle circumscribed triangle side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * 2;
		}
		// Circle inscribed square side length (using radius)
		float FLO_CircleInscribedSquareSideLength(float radius) { // realisation of circle inscribed square side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * Math::FLO_sqrt(2);
		}
		double DOU_CircleInscribedSquareSideLength(double radius) { // realisation of circle inscribed square side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * Math::DOU_sqrt(2);
		}
		// Circle circumscribed square side length (using radius)
		float FLO_CircleCircumscribedSquareSideLength(float radius) { // realisation of circle circumscribed square side length
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return radius * 2;
		}
		double DOU_CircleCircumscribedSquareSideLength(double radius) { // realisation of circle circumscribed square side length
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return radius * 2;
		}
		// Circle inscribed polygon side length (using radius and number of sides)
		float FLO_CircleInscribedPolygonSideLength(float radius, int numSides) { // realisation of circle inscribed polygon side length
			if (radius <= 0 || numSides < 3) {
				return 0.0f; // Invalid radius or not a polygon
			}
			return radius * Math::FLO_sqrt(2 * (1 - Math::FLO_cos(Const::PI / numSides)));
		}
		double DOU_CircleInscribedPolygonSideLength(double radius, int numSides) { // realisation of circle inscribed polygon side length
			if (radius <= 0 || numSides < 3) {
				return 0.0; // Invalid radius or not a polygon
			}
			return radius * Math::DOU_sqrt(2 * (1 - Math::DOU_cos(Const::PI / numSides)));
		}
		// Circle circumscribed polygon side length (using radius and number of sides)
		float FLO_CircleCircumscribedPolygonSideLength(float radius, int numSides) { // realisation of circle circumscribed polygon side length
			if (radius <= 0 || numSides < 3) {
				return 0.0f; // Invalid radius or not a polygon
			}
			return radius * Math::FLO_sqrt(2 * (1 + Math::FLO_cos(Const::PI / numSides)));
		}
		double DOU_CircleCircumscribedPolygonSideLength(double radius, int numSides) { // realisation of circle circumscribed polygon side length
			if (radius <= 0 || numSides < 3) {
				return 0.0; // Invalid radius or not a polygon
			}
			return radius * Math::DOU_sqrt(2 * (1 + Math::DOU_cos(Const::PI / numSides)));
		}
		/*--------------------------------------------19.Sphere--------------------------------------------------------------------*/
		// Sphere volume (using radius)
		float FLO_SphereVolume(float radius) { // realisation of sphere volume
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return (4.0f / 3.0f) * Const::PI * Math::FLO_Pow(radius, 3);
		}
		double DOU_SphereVolume(double radius) { // realisation of sphere volume
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return (4.0 / 3.0) * Const::PI * Math::DOU_Pow(radius, 3);
		}
		// Sphere surface area (using radius)
		float FLO_SphereSurfaceArea(float radius) { // realisation of sphere surface area
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return 4 * Const::PI * Math::FLO_Pow(radius, 2);
		}
		double DOU_SphereSurfaceArea(double radius) { // realisation of sphere surface area
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return 4 * Const::PI * Math::DOU_Pow(radius, 2);
		}
		// Sphere diameter (using radius)
		float FLO_SphereDiameter(float radius) { // realisation of sphere diameter
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return 2 * radius;
		}
		double DOU_SphereDiameter(double radius) { // realisation of sphere diameter
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return 2 * radius;
		}
		// Sphere radius from volume
		float FLO_SphereRadiusFromVolume(float volume) { // realisation of sphere radius from volume
			if (volume <= 0) {
				return 0.0f; // Invalid volume
			}
			return Math::FLO_cbrt((3 * volume) / (4 * Const::PI));
		}
		double DOU_SphereRadiusFromVolume(double volume) { // realisation of sphere radius from volume
			if (volume <= 0) {
				return 0.0; // Invalid volume
			}
			return Math::DOU_cbrt((3 * volume) / (4 * Const::PI));
		}
		// Sphere radius from surface area
		float FLO_SphereRadiusFromSurfaceArea(float surfaceArea) { // realisation of sphere
			if (surfaceArea <= 0) {
				return 0.0f; // Invalid surface area
			}
			return Math::FLO_sqrt(surfaceArea / (4 * Const::PI));
		}
		double DOU_SphereRadiusFromSurfaceArea(double surfaceArea) { // realisation of sphere radius from surface area
			if (surfaceArea <= 0) {
				return 0.0; // Invalid surface area
			}
			return Math::DOU_sqrt(surfaceArea / (4 * Const::PI));
		}	
		// Sphere great circle circumference (using radius)
		float FLO_SphereGreatCircleCircumference(float radius) { // realisation of sphere great circle circumference
			if (radius <= 0) {
				return 0.0f; // Invalid radius
			}
			return 2 * Const::PI * radius;
		}
		double DOU_SphereGreatCircleCircumference(double radius) { // realisation of sphere great circle circumference
			if (radius <= 0) {
				return 0.0; // Invalid radius
			}
			return 2 * Const::PI * radius;
		}
		// Sphere small circle circumference (using radius and angle in radians)
		float FLO_SphereSmallCircleCircumference(float radius, float angle) { // realisation of sphere small circle circumference
			if (radius <= 0 || angle < 0) {
				return 0.0f; // Invalid radius or angle
			}
			return 2 * Const::PI * radius * Math::FLO_sin(angle / 2);
		}
		double DOU_SphereSmallCircleCircumference(double radius, double angle) { // realisation of sphere small circle circumference
			if (radius <= 0 || angle < 0) {
				return 0.0; // Invalid radius or angle
			}
			return 2 * Const::PI * radius * Math::DOU_sin(angle / 2);
		}
		// Sphere spherical cap volume (using radius and height)
		float FLO_SphereSphericalCapVolume(float radius, float height) { // realisation of sphere spherical cap volume
			if (radius <= 0 || height < 0 || height > radius) {
				return 0.0f; // Invalid radius or height
			}
			return (1.0f / 3.0f) * Const::PI * height * height * (3 * radius - height);
		}
		double DOU_SphereSphericalCapVolume(double radius, double height) { // realisation of sphere spherical cap volume
			if (radius <= 0 || height < 0 || height > radius) {
				return 0.0; // Invalid radius or height
			}
			return (1.0 / 3.0) * Const::PI * height * height * (3 * radius - height);
		}
		// Sphere spherical cap surface area (using radius and height)
		float FLO_SphereSphericalCapSurfaceArea(float radius, float height) { // realisation of sphere spherical cap surface area
			if (radius <= 0 || height < 0 || height > radius) {
				return 0.0f; // Invalid radius or height
			}
			return 2 * Const::PI * radius * height;
		}
		double DOU_SphereSphericalCapSurfaceArea(double radius, double height) { // realisation of sphere spherical cap surface area
			if (radius <= 0 || height < 0 || height > radius) {
				return 0.0; // Invalid radius or height
			}
			return 2 * Const::PI * radius * height;
		}
		// Sphere spherical triangle area (using radius and angles in radians)
		float FLO_SphereSphericalTriangleArea(float radius, float angleA, float angleB, float angleC) { // realisation of sphere spherical triangle area
			if (radius <= 0 || angleA < 0 || angleB < 0 || angleC < 0) {
				return 0.0f; // Invalid radius or angles
			}
			float angleSum = angleA + angleB + angleC;
			return radius * radius * (angleSum - Const::PI);
		}
		double DOU_SphereSphericalTriangleArea(double radius, double angleA, double angleB, double angleC) { // realisation of sphere spherical triangle area
			if (radius <= 0 || angleA < 0 || angleB < 0 || angleC < 0) {
				return 0.0; // Invalid radius or angles
			}
			double angleSum = angleA + angleB + angleC;
			return radius * radius * (angleSum - Const::PI);
		}
		// Sphere spherical polygon area (using radius and number of sides)
		float FLO_SphereSphericalPolygonArea(float radius, int numSides, float angle) { // realisation of sphere spherical polygon area
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * radius * (numSides * angle - (numSides - 2) * Const::PI);
		}
		double DOU_SphereSphericalPolygonArea(double radius, int numSides, double angle) { // realisation of sphere spherical polygon area
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * radius * (numSides * angle - (numSides - 2) * Const::PI);
		}
		// Sphere spherical polygon perimeter (using radius and number of sides)
		float FLO_SphereSphericalPolygonPerimeter(float radius, int numSides, float angle) { // realisation of sphere spherical polygon perimeter
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return numSides * radius * Math::FLO_sin(angle / 2);
		}
		double DOU_SphereSphericalPolygonPerimeter(double radius, int numSides, double angle) { // realisation of sphere spherical polygon perimeter
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return numSides * radius * Math::DOU_sin(angle / 2);
		}
		// Sphere spherical polygon inscribed circle radius (using radius and number of sides)
		float FLO_SphereSphericalPolygonInscribedCircleRadius(float radius, int numSides, float angle) { // realisation of sphere spherical polygon inscribed circle radius
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_sin(angle / 2);
		}
		double DOU_SphereSphericalPolygonInscribedCircleRadius(double radius, int numSides, double angle) { // realisation of sphere spherical polygon inscribed circle radius
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_sin(angle / 2);
		}
		// Sphere spherical polygon circumscribed circle radius (using radius and number of sides)
		float FLO_SphereSphericalPolygonCircumscribedCircleRadius(float radius, int numSides, float angle) { // realisation of sphere spherical polygon circumscribed circle radius
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_cos(angle / 2);
		}
		double DOU_SphereSphericalPolygonCircumscribedCircleRadius(double radius, int numSides, double angle) { // realisation of sphere spherical polygon circumscribed circle radius
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_cos(angle / 2);
		}
		// Sphere spherical polygon inscribed ellipse semi-major axis (using radius and number of sides)
		float FLO_SphereSphericalPolygonInscribedEllipseSemiMajorAxis(float radius, int numSides, float angle) { // realisation of sphere spherical polygon inscribed ellipse semi-major axis
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_cos(angle / 2);
		}
		double DOU_SphereSphericalPolygonInscribedEllipseSemiMajorAxis(double radius, int numSides, double angle) { // realisation of sphere spherical polygon inscribed ellipse semi-major axis
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_cos(angle / 2);
		}
		// Sphere spherical polygon circumscribed ellipse semi-major axis (using radius and number of sides)
		float FLO_SphereSphericalPolygonCircumscribedEllipseSemiMajorAxis(float radius, int numSides, float angle) { // realisation of sphere spherical polygon circumscribed ellipse semi-major axis
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_sin(angle / 2);
		}
		double DOU_SphereSphericalPolygonCircumscribedEllipseSemiMajorAxis(double radius, int numSides, double angle) { // realisation of sphere spherical polygon circumscribed ellipse semi-major axis
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_sin(angle / 2);
		}
		// Sphere spherical polygon inscribed ellipse semi-minor axis (using radius and number of sides)
		float FLO_SphereSphericalPolygonInscribedEllipseSemiMinorAxis(float radius, int numSides, float angle) { // realisation of sphere spherical polygon inscribed ellipse semi-minor axis
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_sin(angle / 2);
		}
		double DOU_SphereSphericalPolygonInscribedEllipseSemiMinorAxis(double radius, int numSides, double angle) { // realisation of sphere spherical polygon inscribed ellipse semi-minor axis
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_sin(angle / 2);
		}
		// Sphere spherical polygon circumscribed ellipse semi-minor axis (using radius and number of sides)
		float FLO_SphereSphericalPolygonCircumscribedEllipseSemiMinorAxis(float radius, int numSides, float angle) { // realisation of sphere spherical polygon circumscribed ellipse semi-minor axis
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_cos(angle / 2);
		}
		double DOU_SphereSphericalPolygonCircumscribedEllipseSemiMinorAxis(double radius, int numSides, double angle) { // realisation of sphere spherical polygon circumscribed ellipse semi-minor axis
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_cos(angle / 2);
		}
		// Sphere spherical polygon inscribed triangle side length (using radius and number of sides)
		float FLO_SphereSphericalPolygonInscribedTriangleSideLength(float radius, int numSides, float angle) { // realisation of sphere spherical polygon inscribed triangle side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_sqrt(3);
		}
		double DOU_SphereSphericalPolygonInscribedTriangleSideLength(double radius, int numSides, double angle) { // realisation of sphere spherical polygon inscribed triangle side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_sqrt(3);
		}
		// Sphere spherical polygon circumscribed triangle side length (using radius and number of sides)
		float FLO_SphereSphericalPolygonCircumscribedTriangleSideLength(float radius, int numSides, float angle) { // realisation of sphere spherical polygon circumscribed triangle side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_sqrt(3);
		}
		double DOU_SphereSphericalPolygonCircumscribedTriangleSideLength(double radius, int numSides, double angle) { // realisation of sphere spherical polygon circumscribed triangle side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_sqrt(3);
		}
		// Sphere spherical polygon inscribed square side length (using radius and number of sides)
		float FLO_SphereSphericalPolygonInscribedSquareSideLength(float radius, int numSides, float angle) { // realisation of sphere spherical polygon inscribed square side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_sqrt(2);
		}
		double DOU_SphereSphericalPolygonInscribedSquareSideLength(double radius, int numSides, double angle) { // realisation of sphere spherical polygon inscribed square side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_sqrt(2);
		}
		// Sphere spherical polygon circumscribed square side length (using radius and number of sides)
		float FLO_SphereSphericalPolygonCircumscribedSquareSideLength(float radius, int numSides, float angle) { // realisation of sphere spherical polygon circumscribed square side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_sqrt(2);
		}
		double DOU_SphereSphericalPolygonCircumscribedSquareSideLength(double radius, int numSides, double angle) { // realisation of sphere spherical polygon circumscribed square side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_sqrt(2);
		}
		// Sphere spherical polygon inscribed pentagon side length (using radius and number of sides)
		float FLO_SphereSphericalPolygonInscribedPentagonSideLength(float radius, int numSides, float angle) { // realisation of sphere spherical polygon inscribed pentagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_sqrt(5 + 2 * Math::FLO_sqrt(5));
		}
		double DOU_SphereSphericalPolygonInscribedPentagonSideLength(double radius, int numSides, double angle) { // realisation of sphere spherical polygon inscribed pentagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_sqrt(5 + 2 * Math::DOU_sqrt(5));
		}
		// Sphere spherical polygon circumscribed pentagon side length (using radius and number of sides)
		float FLO_SphereSphericalPolygonCircumscribedPentagonSideLength(float radius, int numSides, float angle) { // realisation of sphere spherical polygon circumscribed pentagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_sqrt(5 + 2 * Math::FLO_sqrt(5));
		}
		double DOU_SphereSphericalPolygonCircumscribedPentagonSideLength(double radius, int numSides, double angle) { // realisation of sphere spherical polygon circumscribed pentagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_sqrt(5 + 2 * Math::DOU_sqrt(5));
		}
		// Sphere spherical polygon inscribed hexagon side length (using radius and number of sides)
		float FLO_SphereSphericalPolygonInscribedHexagonSideLength(float radius, int numSides, float angle) { // realisation of sphere spherical polygon inscribed hexagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_sqrt(3);
		}
		double DOU_SphereSphericalPolygonInscribedHexagonSideLength(double radius, int numSides, double angle) { // realisation of sphere spherical polygon inscribed hexagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_sqrt(3);
		}
		// Sphere spherical polygon circumscribed hexagon side length (using radius and number of sides)
		float FLO_SphereSphericalPolygonCircumscribedHexagonSideLength(float radius, int numSides, float angle) { // realisation of sphere spherical polygon circumscribed hexagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_sqrt(3);
		}
		double DOU_SphereSphericalPolygonCircumscribedHexagonSideLength(double radius, int numSides, double angle) { // realisation of sphere spherical polygon circumscribed hexagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_sqrt(3);
		}
		// Sphere spherical polygon inscribed heptagon side length (using radius and number of sides)
		float FLO_SphereSphericalPolygonInscribedHeptagonSideLength(float radius, int numSides, float angle) { // realisation of sphere spherical polygon inscribed heptagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_sqrt(2 + Math::FLO_sqrt(2));
		}
		double DOU_SphereSphericalPolygonInscribedHeptagonSideLength(double radius, int numSides, double angle) { // realisation of sphere spherical polygon inscribed heptagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_sqrt(2 + Math::DOU_sqrt(2));
		}
		// Sphere spherical polygon circumscribed heptagon side length (using radius and number of sides)
		float FLO_SphereSphericalPolygonCircumscribedHeptagonSideLength(float radius, int numSides, float angle) { // realisation of sphere spherical polygon circumscribed heptagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_sqrt(2 + Math::FLO_sqrt(2));
		}
		double DOU_SphereSphericalPolygonCircumscribedHeptagonSideLength(double radius, int numSides, double angle) { // realisation of sphere spherical polygon circumscribed heptagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_sqrt(2 + Math::DOU_sqrt(2));
		}
		// Sphere spherical polygon inscribed octagon side length (using radius and number of sides)
		float FLO_SphereSphericalPolygonInscribedOctagonSideLength(float radius, int numSides, float angle) { // realisation of sphere spherical polygon inscribed octagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_sqrt(2 + Math::FLO_sqrt(2));
		}
		double DOU_SphereSphericalPolygonInscribedOctagonSideLength(double radius, int numSides, double angle) { // realisation of sphere spherical polygon inscribed octagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_sqrt(2 + Math::DOU_sqrt(2));
		}
		// Sphere spherical polygon circumscribed octagon side length (using radius and number of sides)
		float FLO_SphereSphericalPolygonCircumscribedOctagonSideLength(float radius, int numSides, float angle) { // realisation of sphere spherical polygon circumscribed octagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0f; // Invalid radius, number of sides, or angle
			}
			return radius * Math::FLO_sqrt(2 + Math::FLO_sqrt(2));
		}
		double DOU_SphereSphericalPolygonCircumscribedOctagonSideLength(double radius, int numSides, double angle) { // realisation of sphere spherical polygon circumscribed octagon side length
			if (radius <= 0 || numSides < 3 || angle < 0) {
				return 0.0; // Invalid radius, number of sides, or angle
			}
			return radius * Math::DOU_sqrt(2 + Math::DOU_sqrt(2));
		}
	}
 	
}


