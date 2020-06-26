//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>
#include <vector>
#include <map>

int main()
{
    //
    // Range-based for loop in C++ is added since C++ 11.
    // It executes a for loop over a range. Used as a more
    // readable equivalent to the traditional for loop operating
    // over a range of values, such as all elements in a container.
    //

    // Iterating over whole array
    std::vector<int> v = {0, 1, 2, 3, 4, 5};
    for (auto i : v)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';

    // the initializer may be a braced-init-list
    for (int n : {0, 1, 2, 3, 4, 5})
    {
        std::cout << n << ' ';
    }

    std::cout << std::endl;

    // Iterating over array
    int a[] = {0, 1, 2, 3, 4, 5};
    for (int n : a)
    {
        std::cout << n << ' ';
    }

    std::cout << std::endl;

    // Just running a loop for every array
    // element
    for (int n : a)
    {
        std::cout << "In loop" << ' ';
    }

    std::cout << std::endl;

    // Printing string characters
    std::string str = "my STL string";
    for (char c : str)
    {
        std::cout << c << ' ';
    }

    std::cout << std::endl;

    // Printing keys and values of a map
    std::map<int, int> MAP({{1, 1}, {2, 2}, {3, 3}});
    for (auto i : MAP)
    {
        std::cout << '{' << i.first << ", "
                  << i.second << "}" << std::endl;
    }
    return EXIT_SUCCESS;
} // end of function main
