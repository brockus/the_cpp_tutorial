//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>


//
// Find min of two integers. Should return minimum
// value of x and y both of type integer.
//
inline int min(const int x, const int y)
{
    return (x <= y) ? x : y;
}// end of function min

int main()
{
    //
    // In this example, we are going to write an inline
    // function that uses C++ ternary operator to find the
    // minimum number between two integers
    //
    const int x = 10;
    const int y = 15;

    std::cout << "x = " << x <<", y = " << y << std::endl;
    std::cout << "min(x, y) = " << min(x, y) << std::endl;
    return EXIT_SUCCESS;
} // end of function main
