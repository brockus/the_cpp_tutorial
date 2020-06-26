//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>


void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    //
    // Recall that a pointer refers to the memory address of
    // a variable therefore when you pass a pointer to a
    // function, the function work on the value of the memory
    // address stored in the pointer, which affects the variable
    // that the pointer points to.
    //
    // You pass arguments to a function by pointers when you want
    // to change the values of the arguments. Let’s rewrite the
    // swap() function.
    //
    int x = 10;
    int y = 20;

    std::cout << "Before: x = " << x << ", y = " << y << std::endl;
    swap(&x, &y);
    std::cout << "After: x = " << x << ", y = " << y << std::endl;
    return EXIT_SUCCESS;
} // end of function main
