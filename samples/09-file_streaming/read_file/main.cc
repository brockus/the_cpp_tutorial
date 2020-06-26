//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <fstream>

const char *FILE_NAME = "test.txt";
const unsigned char MAX_CHAR = 1000;

int main()
{
    //
    // In order to read from a text file, you follow the steps below:
    //
    // (1) First, open the text file using the 'fstream' class.
    //
    // (2) Second, use the function getline() to read text from the
    //     stream and store it as a string. The newline or EOF
    //     character makes the getline() function stop reading so
    //     you can check the newline or EOF file character to read
    //     the whole line.
    //
    // (3) Third, close the text file using the close() function.
    //
    // Below is the source code of reading a text file line by line and
    // output it to the screen.
    std::fstream file(FILE_NAME);
    std::string data;

    if (!file.is_open())
    {
        std::cout << "Could not open file " << FILE_NAME << std::endl;
        return EXIT_FAILURE;
    }

    //
    // Use a while loop together with the getline() function to read
    // the file line by line
    //
    while (getline(file, data))
    {
        /* Output the text from the file */
        std::cout << data;
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
