#include <iostream>
#include "Geometry.hpp";

int main() {
    // Example usage of the Math functions
    float angle = 0.5f; // in radians
    std::cout << "sin(" << angle << ") = " << Geometry::Math::FLO_sin(angle) << std::endl;
    std::cout << "cos(" << angle << ") = " << Geometry::Math::FLO_cos(angle) << std::endl;
    std::cout << "arcsin(0.5) = " << Geometry::Math::FLO_arcsin(0.5f) << std::endl;
    std::cout << "arccos(0.5) = " << Geometry::Math::FLO_arccos(0.5f) << std::endl;
    std::cout << "INT_Pow(2, 3) = " << Geometry::Math::INT_Pow(2, 3) << std::endl;


    return 0;
}