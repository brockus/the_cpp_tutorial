//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>
#include <new>

int main()
{
    //
    // Delete is an operator that is used to destroy array and
    // non-array(pointer) objects which are created by new
    // expression.
    //
    // (1) Delete can be used by either using Delete operator or Delete
    //     [ ] operator
    //
    // (2) New operator is used for dynamic memory allocation which
    //     puts variables on heap memory.
    //
    // (3) Which means Delete operator deallocates memory from heap.
    //
    // (4) Pointer to object is not destroyed, value or memory block
    //     pointed by pointer is destroyed.
    //
    // Here, Below is an example where we can apply delete operator:
    //

    //
    // Creating int pointer
    //
    int *ptr1;

    try
    {
        int *ptr1 = new int;
    }
    catch (std::bad_alloc)
    {
        // Handle error
        std::cerr << "error occurred: sufficient memory cannot be allocated" << std::endl;
        return EXIT_FAILURE;
    }

    //
    // Initializing pointer with value 20
    //
    int *ptr2;

    try
    {
        int *ptr2 = new int(20);
    }
    catch (std::bad_alloc)
    {
        // Handle error
        std::cerr << "error occurred: sufficient memory cannot be allocated" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Value of ptr1 = " << *ptr1 << std::endl;
    std::cout << "Value of ptr2 = " << *ptr2 << std::endl;

    delete ptr1; // Destroying ptr1
    delete ptr2; // Detroying ptr2

    return EXIT_SUCCESS;
} // end of function main
