//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>
#include <cstdint> // using integers with standard size


int main()
{
    //
    // C++ provides you with five signed integer types. Each
    // integer type has several synonyms.
    //
    // The following table illustrates the first five integer
    // types with their corresponding synonyms
    //
    // For each signed integer, C++ also provides the corresponding
    // unsigned integer type that has the same memory size as the
    // signed integer type.
    //
    // Here in this tutorial, we have introduced various C++ integer types
    // and shown you how to use the sizeof() operator to get the
    // sizes of integer types in your system in bits.
    //
    std::cout << "Integer Size in Bits:" << std::endl;
    std::cout << "unsigned char          = " << sizeof(unsigned char) * 8 << std::endl;
    std::cout << "signed char            = " << sizeof(signed char) * 8 << std::endl;
    std::cout << "short int              = " << sizeof(short int) * 8 << std::endl;
    std::cout << "unsigned short int     = " << sizeof(unsigned short int) * 8 << std::endl;
    std::cout << "unsigned int           = " << sizeof(unsigned int) * 8 << std::endl;
    std::cout << "int                    = " << sizeof(int) * 8 << std::endl;
    std::cout << "long int               = " << sizeof(long int) * 8 << std::endl;
    std::cout << "unsigned long long int = " << sizeof(unsigned long long int) * 8 << std::endl;

    std::cout << "Standard Integer Size in Bits:" << std::endl;
    std::cout << "uint8_t  = " << sizeof(uint8_t) * 8 << std::endl;
    std::cout << "int8_t   = " << sizeof(int8_t) * 8 << std::endl;
    std::cout << "int16_t  = " << sizeof(int16_t) * 8 << std::endl;
    std::cout << "uint16_t = " << sizeof(uint16_t) * 8 << std::endl;
    std::cout << "uint32_t = " << sizeof(uint32_t) * 8 << std::endl;
    std::cout << "int32_t  = " << sizeof(int32_t) * 8 << std::endl;
    std::cout << "int64_t  = " << sizeof(int64_t) * 8 << std::endl;
    std::cout << "uint64_t = " << sizeof(uint64_t) * 8 << std::endl;

    return EXIT_SUCCESS;
} // end of function main
