//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>


int main()
{
    //
    // The C++ switch case statement is a control flow
    // statement that tests whether a variable or
    // expression matches one of a number of constant
    // integer values, and branches accordingly.
    //
    // The switch case statement is used to control very
    // complex conditional and branching operations. For
    // controlling simple conditional and branching
    // operations, you can use if else statement.
    //
    // The following illustrates the C++ switch case
    // statement syntax:
    //
    // switch (expression)
    // {
    //  case value1: /* execute unit of code 1 */
    //      break;
    //  case value2: /* execute unit of code 2 */
    //      break;
    //      ...
    //  default: /* execute default action */
    //      break;
    // }
    //
    // The following example demonstrates C switch case
    // statement
    //
    int color = 1;
    std::cout << "Please choose a color(1: red,2: green,3: blue):" << std::endl;
    std::cin >> color;

    switch (color)
    {
    case 1:
        std::cout << "you chose red color" << std::endl;
        break;
    case 2:
        std::cout << "you chose green color" << std::endl;
        break;
    case 3:
        std::cout << "you chose blue color" << std::endl;
        break;
    default:
        std::cout << "you did not choose any color" << std::endl;
        break;
    }
    return EXIT_SUCCESS;
} // end of function main
