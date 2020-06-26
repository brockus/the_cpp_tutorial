//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>

enum {MAX_SIZE = 5};


int main()
{
    //
    // C array is a variable that holds multiple elements
    // which share the same data type.
    //
    int arr[MAX_SIZE];
    for (int i = 0; i < MAX_SIZE; ++i)
    {
        //
        // You can access an individual element of the array by using
        // the array name followed by the element subscript enclosed
        // in square brackets as follows:
        //
        //     array_name[subscript]
        //
        // Notice that the array elements start from 0, not 1, so the
        // first element of the a array is a[0] and the last element
        // is a[size-1] where size is the number of element in the a
        // array.
        //
        arr[i] = i;
        std::cout << "a[" << i << "] = " << *(arr + i) << std::endl;
    }
    return EXIT_SUCCESS;
} // end of function main
