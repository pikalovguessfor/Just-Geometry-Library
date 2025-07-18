#include <iostream>
#include "Geometry.hpp";

int main(){
    // Example usage of the Geometry library functions
    
    float hypot = Geometry::Math::FLO_Hypotenuse(3.0f, 4.0f);
    float circle_area = Geometry::Geom::FLO_CircleArea(2.0f);
    float octagon_perimeter = Geometry::Geom::FLO_OctagonPerimeter(1.0f);
    std::cout << "Hypotenuse: " << hypot << std::endl;
    std::cout << "Circle Area: " << circle_area << std::endl;
    std::cout << "Octagon Perimeter: " << octagon_perimeter;

    return 0;
}