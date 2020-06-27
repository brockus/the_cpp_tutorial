//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>

enum
{
    MAX = 10,
    MAX_RANGE = 100
};

void displayArray(int *, const int);

int main()
{
    //
    // Basically any operation on an array, which can be
    // done using array subscript, can be achieved through
    // a pointer to the array.
    //
    // This declares an array of 10 integers. Underneath,
    // there is a block of memory with 10 consecutive objects
    // defining as follows:
    //
    // [0|1| | | | | | |9]
    //
    // The a[i] refers the ith element of the a array. The
    // following defines a pointer that points to the first
    // element of the a array:
    //
    // > int * pa;
    // > pa = &a[0];
    //
    // Because the  pa pointer points to the first element of
    // the a array, *pa is the value of the first element. And
    // (pa+1) points to the next element of the array, and (pa+i)
    // points to the ith element.
    //
    //     (ptr)
    //    /
    //   /
    // [0|1| | | | | | |9]
    //
    // After assigning the pointer to the first element of an array,
    // you can perform any operations on that array. The following
    // example illustrates how to manipulate an array via a pointer.
    //
    int arr[MAX];
    int *arrPtr;

    /* arr is the same as &arr[0] */
    arrPtr = arr;

    /* fill array with random number between 0 and 100 */
    for (auto index = 0; index < MAX; ++index)
    {
        *(arrPtr + index) = std::rand() % MAX_RANGE;
    }
    /* display array via pointer */
    displayArray(arrPtr, MAX);

    /* display array via array name */
    displayArray(arr, MAX);

    return EXIT_SUCCESS;
} // end of function main

//
//  Display an array of integers with predefined size
//
void displayArray(int *p, const int size)
{
    for (auto index = 0; index < size; ++index)
    {
        std::cout << *(p + index) << " ";
    }
    std::cout.put('\n');
}// end of function displayArray
