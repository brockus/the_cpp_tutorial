//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <new>

//
// here we define an enum that holds the max
// size of are input values.
enum { MAX_SIZE = 100};


//
// here we need to process are given input by
// removing the new line char.
void stripNewLine(char* string)
{
    size_t length = strlen(string);
    if((length > 0) && (*(string + length - 1) == '\n'))
    {
        *(string + length - 1) = '\0';
    }
}

//
// show you how you can work with user input in 'cpp'.
int main()
{
    //
    // here we allocate memory for are input
    char *str = new char[MAX_SIZE];

    if (str == nullptr)
    {
        std::cerr << "not enough memory to allocate string!" << std::endl;
        return EXIT_FAILURE;
    }
    
    //
    // The fgets function includes the newline.
    //
    // So we process the string with the handy
    // strip new line utility function.  
    std::cout << "enter your name: ";

    fgets(str, MAX_SIZE, stdin);
    stripNewLine(str);
  	
    std::cout << "Hello" << str << std::endl;

    delete str;

    return EXIT_SUCCESS;
}// end of function main/* end of function main */
