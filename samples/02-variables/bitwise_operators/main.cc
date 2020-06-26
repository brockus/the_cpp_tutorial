//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>


int main()
{
    //
    // C++ provides six bitwise operators for manipulating bit.
    // The bitwise operator can only be applied to integral
    // operands such as char, short, int and long.
    //
    // The bitwise operators are preferred in some contexts
    // because bitwise operations are faster than (+) and
    // (-) operations and significantly faster than (*) and
    // (/) operations.
    //
    int d1 = 4, /* binary 100 */
        d2 = 6, /* binary 110 */
        d3;

    std::cout << "\nd1=" << d1 << std::endl;
    std::cout << "\nd2=" << d2 << std::endl;

    d3 = d1 & d2;
    std::cout << "\n Bitwise AND  d1 & d2 = " << d3 << std::endl;

    d3 = d1 | d2;
    std::cout << "\n Bitwise OR d1 | d2 = " << d3 << std::endl;

    d3 = d1 ^ d2;
    std::cout << "\n Bitwise XOR d1 ^ d2 = " << d3 << std::endl;

    d3 = ~d1;
    std::cout << "\n Ones complement of d1 = " << d3 << std::endl;

    d3 = d1 << 2;
    std::cout << "\n Left shift by 2 bits d1 << 2 = " << d3 << std::endl;

    d3 = d1 >> 2;
    std::cout << "\n Right shift by 2 bits d1 >> 2 = " << d3 << std::endl;

    return EXIT_SUCCESS;
} // end of function main
