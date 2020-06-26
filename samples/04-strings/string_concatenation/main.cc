//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>
#include <cstring>

enum
{
    MIN_SIZE = 25,
    MAX_SIZE = 50
};

int main()
{
    //
    // To concatenate two strings in C++, you use the
    // strncat() function. The following example copies
    // the first and last name strings to the fullname
    // string.
    //
    char firstName[MIN_SIZE];
    char lastName[MIN_SIZE];
    char fullName[MAX_SIZE];

    strncpy(firstName, "John", MIN_SIZE);
    strncpy(lastName, "Doe", MIN_SIZE);

    //
    // Concatenate first and last name then output result
    //
    strncat(fullName, firstName, MAX_SIZE);
    strncat(fullName, ", ", MAX_SIZE);
    strncat(fullName, lastName, MAX_SIZE);

    std::cout << fullName << std::endl; /* Output is: John, Doe */
    return EXIT_SUCCESS;
} // end of function main