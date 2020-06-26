//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>
#include <cstring>

enum
{
    MIN_SIZE = 25
};


int main()
{
    //
    // To copy a string into another string, you use
    // the strncpy() function. The following example
    // shows you how to copy a string into another.
    //
    char firstName[MIN_SIZE];
    char lastName[MIN_SIZE];

    strncpy(firstName, "John", MIN_SIZE);
    strncpy(lastName, "Doe", MIN_SIZE);

    //
    // Outputing first and last name.
    //
    std::cout << firstName << ", " << lastName << std::endl; /* Output is: John, Doe */
    return EXIT_SUCCESS;
} // end of function main
