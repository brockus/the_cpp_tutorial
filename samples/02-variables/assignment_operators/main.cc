//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>


int main()
{
    //
    // C++ assignment operators are used to assign the value
    // of a variable or expression to another variable. The
    // syntax of assignment operators is as follows:
    //
    int x = 10;

    //
    // Besides the assignment operator, C++ also supports another
    // short hand format that works the same assignment operator
    // with an additional operator such as +=, -=, *=, /=, %=.
    //
    // Each assignment operator has a priority. And they are evaluated
    // from right to left based on its priority. The following is the
    // assignment operator and its priority: =, +=, -=, *=, /=, %=.
    //

    //
    // demonstrate = operator
    //
    int y = x;
    std::cout << "var y = " << y << std::endl;

    //
    // demonstrate += operator
    //
    y += 10;
    std::cout << "var y += 10; y = " << y << std::endl;

    //
    // demonstrate -= operator
    //
    y -= 5;
    std::cout << "var y -= 5; y = " << y << std::endl;

    //
    // demonstrate *= operator
    //
    y *= 4;
    std::cout << "var y *= 4; y = " << y << std::endl;

    //
    //demonstrate /= operator
    //
    y /= 2;
    std::cout << "var y /= 2; y = " << y << std::endl;

    return EXIT_SUCCESS;
} // end of function main
