//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>


int main()
{
    //
    // C++ for loop is very flexible based on the
    // combination of the three expressions. You
    // can increase or decrease the loop counter.
    // You can count by not only one but also two,
    // three and so on. You can count by a character.
    // Let’s take a look at the following program:
    //

    //
    //count down from 10
    //
    int waits = 10;
    for (int sec = waits; sec > 0; sec--)
    {
        std::cout << sec << std::endl;
    }
    std::cout << "Happy New Year!" << std::endl;

    //
    // count by 3
    //
    for (int sec = 0; sec < 10; sec += 3)
    {
        std::cout << sec << std::endl;
    }

    //
    // count by character
    //
    for (char c = 'a'; c <= 'z'; c++)
    {
        std::cout << "ASCII(" << c << ") = " << static_cast<int>(c) << std::endl;
    }
    return EXIT_SUCCESS;
} // end of function main
