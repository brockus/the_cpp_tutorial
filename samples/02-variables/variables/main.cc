//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>


int main()
{
    //
    // here you see three variables of type integer. As you can see,
    // we assigned values to each of them on the same line as they
    // are declared.
    //
    int leftNumber = 5;
    int rightNumber = 2;
    int result = leftNumber + rightNumber;

    //
    // here we can see that it's easy to output the values of the
    // integers.
    //
    std::cout << "left value is " << leftNumber << ", and right value is " << rightNumber << std::endl;
    std::cout << "So when both are added it's " << result << std::endl;

    //
    // But it's also possable to declared a variable on one line
    // and assigned a value to it later like this example here.
    //
    int someValue;
    someValue = 24;

    std::cout << "and the answer to life is " << someValue << std::endl;
    
    return EXIT_SUCCESS;
}// end of function main
