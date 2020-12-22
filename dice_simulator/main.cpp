#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // use time() to get an int value
    int elapsed_seconds = time(nullptr);

    // seed the random number generator
    srand(elapsed_seconds);

    // roll the first die
    int die1 = rand() % 6;
    die1 = die1 + 1;

    // roll the second die
    int die2 = rand() % 6;
    die2 = die2 + 1;

    // write output to console
    cout << "Your roll: " << die1 << " " << die2 << endl << endl;

    return 0;
}