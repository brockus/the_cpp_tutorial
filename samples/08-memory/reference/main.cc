//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>
#include <vector>

int main()
{
    //
    // When a variable is declared as reference, it becomes
    // an alternative name for an existing variable. A
    // variable can be declared as reference by putting ‘&’
    // in the declaration.
    //
    std::vector<int> vect{ 10, 20, 30, 40 };  
  
    // We can modify elements if we  
    // use reference 
    for (int &x : vect)  
        {x = x + 5;} 
  
    // Printing elements 
    for (int x : vect)  
       {std::cout << x << " ";  }
  
    return EXIT_SUCCESS;
} // end of function main
