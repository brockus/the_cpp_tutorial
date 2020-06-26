//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>

void swap(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    //
    // Passing argument to a function by values means all the
    // arguments that you pass to the function are copied into
    // copied variables. The function works on the copied
    // variables only, therefore, arguments are not changed by
    // the function.
    //
    // You pass arguments to a function by value when you don’t
    // want the function change the value of the arguments.
    //
    int x = 10;
    int y = 20;

    std::cout << "Before: x = " << x << ", y = " << y << std::endl;
    swap(x, y);
    std::cout << "After: x = " << x << ", y = " << y << std::endl;
    return EXIT_SUCCESS;
} // end of function main
