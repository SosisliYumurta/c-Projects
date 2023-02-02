/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int min, max;
    cout << "Enter the minimum value of the range: ";
    cin >> min;
    cout << "Enter the maximum value of the range: ";
    cin >> max;

    srand(time(NULL)); 
    int target = min + (rand() % (max - min + 1));

    int guess;
    while (true)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == target)
        {
            cout << "You got it right!\n";
            break;
        }
        else if (guess < target)
        {
            cout << "Too low.\n";
        }
        else
        {
            cout << "Too high.\n";
        }
    }

    return 0;
}
