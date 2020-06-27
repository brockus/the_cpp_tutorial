//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>

int main()
{
    //
    // Sometimes you want to execute a piece of code in
    // case of the expression in the if statement evaluates
    // to false. You can use the second form of the if statement
    // which is known as if else statement. The following
    // illustrates the syntax of the if else statement:
    //
    // if (expression)
    // {
    //     /* code block of if statement */
    // }
    // else
    // {
    //     /* code block of else statement */
    // }
    //
    // The following example demonstrates how to use the if else
    // statement:
    //
    int x;
    std::cout << "Please enter a number: ";
    std::cin >> x;

    if (x > 0)
    {
        std::cout << x << " > 0";
    }
    else
    {
        std::cout << x << " < 0";
    }
    return EXIT_SUCCESS;
} // end of function main
