#include <iostream>
#include "Geometry.hpp";

int main() {
    // Example usage of the functions defined in Geometry.hpp
    int sideA = 5, sideB = 10;
    std::cout << "Square of square (int): " << Geometry::INT_squareOfSquare(sideA, sideB) << std::endl;
    std::cout << "Square of rectangle (int): " << Geometry::INT_squareOfRectangle(sideA, sideB) << std::endl;

    float radius = 3.0f;
    std::cout << "Area of circle (float): " << Geometry::FLO_areaOfCircle(radius) << std::endl;
    std::cout << "Circumference of circle (float): " << Geometry::FLO_Circumference(radius) << std::endl;

    return 0;
}