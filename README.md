# Just-Geometry Library

Just-Geometry is a simple and lightweight C++ single-header library for geometric calculations and basic math functions.  
It is designed for easy integration into any project, with no dependencies and a clear, modular structure.

## Features

- **Basic Math Functions:** Custom implementations of `pow`, `sqrt`, `factorial`, `sin`, `cos`, `tan`, `arcsin`, `arccos`, `arctan` (using Taylor series).
- **Geometry Calculations:**  
  - Area and perimeter for squares, rectangles, triangles, and circles  
  - Triangle angles and sides calculation  
  - Hypotenuse calculation  
- **Multiple Data Types:** Functions for `int`, `unsigned int`, `float`, and `double`.
- **No Dependencies:** Just include one header file in your project.
- **Educational Purpose:** Great for learning, prototyping, and competitive programming.

## Usage

1. Copy `Geometry.hpp` to your project.
2. Include it in your code:
   ```cpp
   #include "Geometry.hpp"
   ```
3. Use the functions from the `Geometry` namespace:
   ```cpp
   float hypotenuse = Geometry::Math::FLO_Hypotenuse(3.0f, 4.0f); // 5.0
   float area = Geometry::FLO_areaOfCircle(2.0f);
   ```

## Example

```cpp
#include "Geometry.hpp"
#include <iostream>

int main() {
    float a = 3.0f, b = 4.0f;
    std::cout << "Hypotenuse: " << Geometry::Math::FLO_Hypotenuse(a, b) << std::endl;
    std::cout << "Area of circle (r=2): " << Geometry::FLO_areaOfCircle(2.0f) << std::endl;
    return 0;
}
```

## License

This project is open source and free to use for any purpose.

---

*Thanks to everyone using this simple library!*
