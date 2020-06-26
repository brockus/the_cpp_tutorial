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
    // Dynamic memory allocation in C/C++ refers to performing memory
    // allocation manually by programmer. Dynamically allocated memory
    // is allocated on Heap and non-static and local variables get memory
    // allocated on Stack (Refer Memory Layout C Programs for details).
    //
    // What are applications?:
    //
    // (1) One use of dynamically allocated memory is to allocate memory of
    //     variable size which is not possible with compiler allocated memory
    //     except variable length arrays.
    //
    // (2) The most important use is flexibility provided to programmers. We
    //     are free to allocate and deallocate memory whenever we need and
    //     whenever we don’t need anymore. There are many cases where this
    //     flexibility helps. Examples of such cases are Linked List, Tree, etc.
    //
    // How is it different from memory allocated to normal variables?
    //
    // For normal variables like “int a”, “char str[10]”, etc, memory is
    // automatically allocated and deallocated. For dynamically allocated
    // memory like “int *p = new int[10]”, it is programmers responsibility
    // to deallocate memory when no longer needed. If programmer doesn’t
    // deallocate memory, it causes memory leak (memory is not deallocated
    // until program terminates).
    //
    // How is memory allocated/deallocated in C++?
    //
    // C uses malloc() and calloc() function to allocate memory dynamically
    // at run time and uses free() function to free dynamically allocated memory.
    // C++ supports these functions and also has two operators new and delete that
    // perform the task of allocating and freeing the memory in a better and easier
    // way.
    //

    //
    // Initializing pointer with value 20
    //
    int *ptr;

    try
    {
        int *ptr = new int(20);
    }
    catch (std::bad_alloc)
    {
        // Handle error
        std::cerr << "error occurred: sufficient memory cannot be allocated" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Value of ptr = " << *ptr << std::endl;

    delete ptr; // Detroying ptr

    return EXIT_SUCCESS;
} // end of function main
