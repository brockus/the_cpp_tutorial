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

const unsigned char NO_ARGUMENTS_ARGC            = 1;

const unsigned char COMMAND_ARG_OFFSET           = 1;
const unsigned char VALID_SAY_HELLO_TO_ARGC      = 4;
const unsigned char VALID_SAY_HELLO_CLASSIC_ARGC = 3;

const unsigned char SWITCH_ARG_OFFSET            = 1;
const unsigned char VALID_SWITCH_ARGC            = 2;

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
    // No arguments is always wrong
    //
    if (argc == NO_ARGUMENTS_ARGC)
    {
        showUsage();
    }

    //
    // Check for "say-hello" command
    //
    else if (!strncmp(*(argv + COMMAND_ARG_OFFSET), "say-hello", 10))
    {
        std::cout << ": " << argv[1] << std::endl;

        //
        // Check for valid "say-hello --to" command
        //
        if (argc == VALID_SAY_HELLO_TO_ARGC &&
            !strncmp(*(argv + COMMAND_ARG_OFFSET + 1), "--to", 5))
        {
            std::cout << "Hello, " << *(argv + COMMAND_ARG_OFFSET + 2) << '!' << std::endl;
        }

        //
        // Check for valid "say-hello --classic" command
        //
        else if (argc == VALID_SAY_HELLO_CLASSIC_ARGC &&
                 !strncmp(*(argv + COMMAND_ARG_OFFSET), "--classic", 10))
        {
            std::cout << "Hello, World!" << std::endl;
        }

        //
        // Otherwise give SubUsage --help
        //
        else
        {
            showSubUsage();
        }
    }

    //
    // Check for valid "--verison" switch
    //
    else if (argc == VALID_SWITCH_ARGC &&
             !strncmp(*(argv + SWITCH_ARG_OFFSET), "--version", 10))
    {
        std::cout << VERSION << std::endl;
    }

    //
    // Everything else will turn into "--help"
    else
    {
        showUsage();
    }

    // Signal to operating system everything works fine
    return EXIT_SUCCESS;
} // end of function main
