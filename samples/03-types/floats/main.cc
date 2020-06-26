//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>


int main()
{
    //
    // C++ provides various floating-point types that
    // represent non-integer number with a decimal
    // point at any position. For example, with integer
    // types, you only can have numbers 1 2, 10, 200...
    // however with floating-point type, you can have
    // 1.0, 2.5, 100.25 and so on.
    //
    std::cout << "Floating Size in Bits:" << std::endl;
    std::cout << "float      = " << sizeof(float) * 8 << std::endl;
    std::cout << "double     = " << sizeof(double) * 8 << std::endl;
    std::cout << "long double = " << sizeof(long double) * 8 << std::endl;
    return EXIT_SUCCESS;
}// end of function main
