//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>

void swap(int &first, int &second)
{
    int temp = first;
    first = second;
    second = temp;
}

int main()
{
    //
    // If a function receives a reference to a variable, it
    // can modify the value of the variable. For example, in
    // the following program variables are swapped using
    // references.
    //
    int x = 2, y = 3;

    std::cout << x << " " << y << std::endl;

    swap(x, y);
    std::cout << x << " " << y << std::endl;
    return EXIT_SUCCESS;
} // end of function main
