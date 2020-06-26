//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>

typedef struct _address
{
    char street[50];
    char country[20];
    int houseNumber;
    int zipCode;
} address;

int main()
{
    //
    // Before allocating memory to a data object, you need to
    // identify its size so that you can allocate the corresponding
    // amount of memory.
    //
    // The return type of the sizeof operator is size_t that
    // is a separate type in C++ to represent amounts of memory.
    // C++ uses a separate type size_t because the existing types
    // are defined based on the target processor’s arithmetic
    // capabilities, not the memory capabilities. The size_t is
    // unsigned defined in the stddef.h header file. The maximum
    // value of the size_t is defined as a macro constant ( SIZE_MAX)
    // in the cstdint file. It is at least 65535.
    //
    // The following program displays the sizes of common C++ data types.
    //
    std::cout << "Size of int is " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes" << std::endl;
    std::cout << "Size of short is " << sizeof(short) << " bytes" << std::endl;
    std::cout << "Size of unsigned short is " << sizeof(unsigned short) << " bytes" << std::endl;
    std::cout << "Size of long is " << sizeof(long) << " bytes" << std::endl;
    std::cout << "Size of char is " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Size of float is " <<  sizeof(float) << " bytes" << std::endl;
    std::cout << "Size of double is " << sizeof(double) << " bytes" << std::endl;

    std::cout << "Size of address is " << sizeof(address) << " bytes" << std::endl;

    return EXIT_SUCCESS;
} // end of function main
