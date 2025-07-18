# Just-Geometry Library

Just-Geometry is a universal, single-header C++ library for geometry and basic math calculations.
This library is designed to be easy to use, educational, and highly portable. It contains a wide range of functions for working with both 2D and 3D geometric shapes, as well as custom implementations of many mathematical operations.

## Features

**Geometry**
 - Calculations for areas, perimeters, diagonals, radii, chord/arc/sector lengths, medians, heights, bisectors, inscribed and circumscribed circles, and more.
Supports a variety of shapes: squares, rectangles, triangles, circles, ellipses, regular polygons, stars, prisms, cylinders, cones, spheres, and more.
 - Advanced geometric functions for polygons and solids, including spherical geometry.
   
**Math**
 - Custom implementations of mathematical functions: pow, sqrt, cbrt, factorial, sin, cos, tan, arcsin, arccos, arctan (using Taylor series).
 - All functions are implemented for multiple data types: int, unsigned int, float, double.
   
**Usability**
 - No dependencies: just include one header file in your project.
 - Functions are organized into namespaces: Geometry::Math for mathematical operations and Geometry::Geom for geometric calculations.
 - Suitable for education, olympiads, labs, prototyping, and self-study.
## Example
```cpp
#include "Geometry.hpp"
#include <iostream>

int main() {
    float a = 3.0f, b = 4.0f;
    std::cout << "Hypotenuse: " << Geometry::Math::FLO_Hypotenuse(a, b) << std::endl;
    std::cout << "Circle area (r=2): " << Geometry::Geom::FLO_CircleArea(2.0f) << std::endl;
    std::cout << "Octagon perimeter (side=1): " << Geometry::Geom::FLO_OctagonPerimeter(1.0f) << std::endl;
    return 0;
}

```

**How to use**
 - Copy Geometry.hpp to your project.
 - Include it in your source file:
 - Use functions from the Geometry::Math and Geometry::Geom namespaces as needed.
 - License
 - This library is free to use for any purpose.

**Just-Geometry brings together all your geometry and math needs in a single, easy-to-use file.**

