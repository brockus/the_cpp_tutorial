//
// author: Michael Brockus
// gmail : <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>
#include <ctime>

enum
{
    ALLOWED_TIMES = 4
};

int main()
{
    //
    // The C while loop is used when you want to execute
    // a block of code repeatedly with a checked condition
    // before making an iteration.
    //
    // The while loop executes as long as the given
    // logical expression evaluates to true. When
    // expression evaluates to false, the loop stops.
    // The expression is checked at the beginning of
    // each iteration. The execute statements inside
    // the body of the while loop statement are not
    // executed if the expression evaluates to false
    // when entering the loop. It is necessary to update
    // the loop condition inside the loop body to avoid
    // an indefinite loop.
    //
    // If you want to escape the loop without waiting for
    // the expression to evaluate, you can use the break
    // statement. If you want to go back to the top of the
    // while loop statement without executing the code below
    // a certain point inside the while loop body, you use
    // the continue statement.
    //
    int secret, input = 0;
    int times = 1;

    /* get a random number between 0 and 10 */
    srand((unsigned int)time(nullptr));
    secret = rand() % 10 + 1;

    /* start the game */
    std::cout << "--- Demonstrate C++ while loop statement --- " << std::endl << std::endl;
    std::cout << "--- Number Guessing Game --- " << std::endl << std::endl;

    while (input != secret && times <= ALLOWED_TIMES)
    {
        std::cout << "Please enter a number (0 - 10): ";
        std::cin >> input;

        if (input == secret)
        {
            std::cout << "Bingo! you got it." << std::endl;
        }
        else if (input > secret)
        {
            std::cout << "No, it is smaller." << std::endl;
        }
        else
        {
            std::cout << "No, it is bigger." << std::endl;
        }
        times++;
    }

    if (times == ALLOWED_TIMES)
    {
        std::cout << "You lose! The secret number is " << secret << std::endl;
    }
    return EXIT_SUCCESS;
} // end of function main
