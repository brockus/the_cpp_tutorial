//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>


int main()
{
    //
    // If you want to use more than one condition, you
    // can use if else-if statement. The syntax of the
    // if else if statement is as follows:
    //
    // if (condition-1)
    // {
    //     /* code block if condition-1 is true */
    // }
    // else if (condition-2)
    // {
    //     /* code block if condition-2 is true */
    // }
    // else if (condition-3)
    // {
    //     /* code block if condition-3 is true */
    // }
    // else
    // {
    //     /* code block all conditions above are false */
    // }
    //
    // The else-if statement is used to make multiway decisions.
    // The conditions in the corresponding if and else if branch
    // evaluates in sequence from top to bottom. If a condition
    // evaluates to true, the statements associated with it executes
    // and terminates the whole chain.
    //
    // You can have as many branches as you want but it is not
    // recommended because the code looks less readable and difficult
    // to maintain.
    //
    // The following example compares the input number with zero (0)
    // and displays the corresponding message:
    //
    int x;
    std::cout << "Please enter a number: ";
    std::cin >> x;

    if (x > 0)
    {
        std::cout << x << " > 0";
    }
    else if (x < 0)
    {
        std::cout << x << " < 0";
    }
    else
    {
        std::cout << "zero" << std::endl;
    }
    return EXIT_SUCCESS;
} // end of function main
