//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <iomanip> // std::setprecision
#include <cstdlib>

/*
 *  C comments examples
 */
int main()
{
    double const PI = 3.14; // PI constant
    double radius = 10;     // radius of a circle

    /* calculate area of a circle */
    double area = PI * radius * radius;

    /* calculate circumference of a circle */
    double circumference = 2 * radius * PI;

    std::cout << "Area of the circle is "
              << std::setprecision(2) << area << std::endl;
    std::cout << "Circumference of the circle is "
              << std::setprecision(2) << circumference << std::endl;

    return EXIT_SUCCESS;
} // end of function main
