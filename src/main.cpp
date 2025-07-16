#include <iostream>
#include "Geometry.hpp";

int main() {
    // Example usage of the functions defined in Geometry.hpp
    int squareArea = Geometry::INT_squareOfSquare(4, 4);
    std::cout << "Area of square: " << squareArea << std::endl;

    unsigned int rectangleArea = Geometry::UINT_squareOfRectangle(5, 10);
    std::cout << "Area of rectangle: " << rectangleArea << std::endl;

    float triangleArea = Geometry::FLO_squareOfTriangle(3.0f, 6.0f);
    std::cout << "Area of triangle: " << triangleArea << std::endl;

    double trianglePerimeter = Geometry::DOU_perimeterOfTriangle(3.0, 4.0, 5.0);
    std::cout << "Perimeter of triangle: " << trianglePerimeter << std::endl;

    return 0;
}