//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>


int main()
{
    //
    // C++ supports most common arithmetic operators such as
    // +,-,*,/ and modulus operator %. The modulus operator
    // (%) returns the remainder of integer division calculation.
    // Note that the modulus operator cannot be applied to a
    // double or float.
    //
    // The C++ arithmetic operators have precedence rules that are
    // similar to the rules in math. The + and – operators have the
    // same precedence. The precedence of *, / and % operators are
    // higher than the + and – operators. The C++ arithmetic operators
    // associate from left to right.
    //
    int x = 10, y = 20;
 
    std::cout << "var x = " << x << std::endl;
    std::cout << "var y = " << y << std::endl;
    //
    // demonstrate = operator +
    //
    y = y + x;
    std::cout << "var y = y + x; y = " << y << std::endl;
 
    //
    // demonstrate - operator
    //
    y = y - 2;
    std::cout << "var y = y - 2; y = " << y << std::endl;

    //
    // demonstrate * operator
    //
    y = y * 5;
    std::cout << "var y = y * 5; y = " << y << std::endl;
 
    //
    // demonstrate / operator
    //
    y = y / 5;
    std::cout << "var y = y / 5; y = " << y << std::endl;
 
    //
    // demonstrate modulus operator %
    //
    int remainder = 0;
    remainder = y % 3;
 
    std::cout << "var remainder = y % 3; remainder = " << remainder << std::endl;

    return EXIT_SUCCESS;
}// end of function main
