//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>
#include <cstring>

enum
{
    MAX_SIZE = 100
};


int main()
{
    //
    // To compare two strings in C++, you use the strcmp() function.
    // See the following example:
    //
    char strOne[MAX_SIZE];
    char strTwo[MAX_SIZE];

    std::cout << "Enter the first string: ";
    fgets(strOne, sizeof(strOne), stdin);

    std::cout << "Enter the second string: ";
    fgets(strTwo, sizeof(strTwo), stdin);

    int result = strcmp(strOne, strTwo);

    if (result > 0)
    {
        std::cout << "str1 > str2" << std::endl;
    }
    else if (result < 0)
    {
        std::cout << "str1 < str2" << std::endl;
    }
    else
    {
        std::cout << "str1 == str2" << std::endl;
    }
    return EXIT_SUCCESS;
} // end of function main
