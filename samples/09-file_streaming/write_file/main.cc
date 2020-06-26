//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <fstream>

const char *FILE_NAME = "test.txt";
const unsigned char ITER_LEN = 10;

int main()
{
    //
    // The following illustrates the steps of writing text
    // into a text file line by line:
    //
    // (1) To create a file, use either the ofstream or fstream object, and
    //     specify the name of the file.
    //
    // (2) To write to the file, use the insertion operator (<<).
    //
    // (3) Third, use function close() to close the file
    //
    // The following program writes 10 lines of text into a text file named
    // test.txt in the root directory.
    //
    std::fstream file(FILE_NAME);
    std::string data;

    /* open the file for writing*/
    if (!file.is_open())
    {
        std::cout << "Could not open file " << FILE_NAME << std::endl;
        return EXIT_FAILURE;
    }

    /* write 10 lines of text into the file stream*/
    for (int index = 0; index < ITER_LEN; ++index)
    {
        file << "This is line " << (index + 1) << std::endl;
    }

    file.close();
    if (file.fail())
    {
        /* Handle error */
        std::cout << "Was not is closed before returning to the caller!" << std::endl;
        return EXIT_FAILURE;
    }
    std::terminate();
    return EXIT_SUCCESS;
} // end of function main
