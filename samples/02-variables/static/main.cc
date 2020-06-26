//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>


//
// this is a counter function with out a static counter
// variable.
//
int counter()
{
    int count = 0;
    count++;
    return count;
}

//
// this is a counter function with the static counter
// variable.
//
int staticCounter()
{
    static int count = 0;
    count++;
    return count;
}

int main()
{
    //
    // By default, variables are local to the scope in which they
    // are defined. Variables can be declared as static to increase
    // their scope up to file containing them. As a result, these
    // variables can be accessed anywhere inside a file.
    //
    // See function counter()
    //
    std::cout << "Pizzas counter with out 'static'" << std::endl;
    std::cout << counter() << "Pizzas" << std::endl;
    std::cout << counter() << "Pizzas" << std::endl;
    std::cout << counter() << "Pizzas" << std::endl;

    //
    // We will see that count is not updated because it is removed
    // from memory as soon as the function completes. If static is
    // used, however
    //
    // See function staticCounter()
    //
    std::cout << "Pizzas counter with the 'static'" << std::endl;
    std::cout << staticCounter() << "Pizzas" << std::endl;
    std::cout << staticCounter() << "Pizzas" << std::endl;
    std::cout << staticCounter() << "Pizzas" << std::endl;

    return EXIT_SUCCESS;
}// end of function main
