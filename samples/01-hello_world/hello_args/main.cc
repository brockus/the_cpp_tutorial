//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>
#include <cstring>

//
// Version number of this program.
//
const char *VERSION = "0.1.1";

const unsigned char NO_ARGUMENTS_ARGC = 1;
const unsigned char MAX_COMMAND_ARGS = 1;
const unsigned char MAX_SWITCH_ARGS = 1;
const unsigned char MAX_SUB_COMMAND_ARGS = 2;
const unsigned char MAX_SUB_SWITCH_ARGS = 2;

//
// Will print the list commands the user can use with
// this program
void showUsage()
{
    std::cout << "Usage: prog <command name>" << std::endl << std::endl;
    std::cout << "say-hello : Tells the program to say hello world." << std::endl;
    std::cout << "--version : Prints the version of the program." << std::endl;
    std::cout << "--help    : Prints this menu of commands." << std::endl;
}

//
// Will print the list commands the user can use with
// this say hello command.
void showSubUsage()
{
    std::cout << "Usage: prog say-hello --<switch name>" << std::endl << std::endl;
    std::cout << "--classic : Prints Hello, World for the user." << std::endl;
    std::cout << "--to      : Name of the person being sent to." << std::endl;
    std::cout << "--help    : Prints this menu of commands." << std::endl;
}

//
// this is the hello args app. here to show how
// you can build a command line app using 'cpp'.
int main(int argc, char **argv)
{
    //
    // first we check passed args to see if they are valid.
    if (argc == NO_ARGUMENTS_ARGC)
    {
        showUsage();
        return EXIT_SUCCESS;
    }

    //
    // check to see if any of the args passed are valid
    // and if so run one of the if branchs.
    //
    if (!strncmp(*(argv + MAX_COMMAND_ARGS), "say-hello", 10))
    {
        std::cout << ": " << argv[1] << std::endl;
        if (*(argv + MAX_SUB_COMMAND_ARGS) == nullptr)
        {
            showSubUsage();
            return EXIT_SUCCESS;
        }
        else if (!strncmp(*(argv + MAX_SUB_SWITCH_ARGS), "--to", 5))
        {
            std::cout << "Hello, " << *(argv + 3) << '!' << std::endl;
        }
        else if (!strncmp(*(argv + MAX_SUB_SWITCH_ARGS), "--classic", 10))
        {
            std::cout << "Hello, World!" << std::endl;
        }
    }
    else if (!strncmp(*(argv + MAX_SWITCH_ARGS), "--version", 10))
    {
        std::cout << VERSION << std::endl;
    }
    else if (!strncmp(*(argv + MAX_SWITCH_ARGS), "--help", 7))
    {
        showUsage();
    }

    // Signal to operating system everything works fine
    return EXIT_SUCCESS;
} // end of function main
