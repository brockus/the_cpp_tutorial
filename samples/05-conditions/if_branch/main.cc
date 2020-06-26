//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>


int main()
{
    //
    // The if statement allows you to control the execution
    // of code based on a  particular condition. The syntax
    // of the if statement is as follows:
    //
    // if (expression)
    // {
    //    /* unit of code to be executed */
    // }// end of if branch
    //
    // The body of the if statement only executes if the
    // expression evaluates to a non-zero value or true.
    // If the expression evaluates to false, the statements
    // inside the body of the if statement will be ignored.
    //
    // The program asked users to enter a number. If the number
    // is greater than zero, it displays a message showing that
    // otherwise, it does nothing.
    //
    int x;
    std::cout << "Please enter a number: ";
    std::cin >> x;

    if (x > 0)
    {
        std::cout << std::endl << "The number " << x << " is greater than 0" << std::endl;
    }
    return EXIT_SUCCESS;
} // end of function main
