//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>


int main()
{
    bool answer = true;
    std::cout << "The Answer Is " << ((answer == true) ? "Yes" : "No") << std::endl;

    //
    // Standard logical operators &&, ||, ! can be used
    // with the Boolean type in any combination. A program
    // may undefine and perhaps then redefine the macros
    // bool, true and false.
    //
    bool firstAnswer = true, secondAnswer = false;

    std::cout << (firstAnswer && secondAnswer) << std::endl;
    std::cout << (firstAnswer || secondAnswer) << std::endl;
    std::cout << !secondAnswer << std::endl;

    return EXIT_SUCCESS;
} // end of function main
