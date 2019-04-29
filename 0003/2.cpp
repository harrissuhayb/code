#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Program for adding two integers, sum range: -2147483648 to 2147483647
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    cout << "Sum guessing game by Harris..." << endl;
    int score = 0, wrong = 0, tries = 3;
    while (wrong != tries)
    {

        int a = rand() % 100;
        int b = rand() % 100;
        int c;
        c = a + b;
        cout << a << " + " << b << " = "
             << "?" << endl;
        int guess;
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == c)
        { // right answer
            cout << "You are correct" << endl;
            score = score + 1;
        }
        else
        { // wrong answer
            cout << "You are wrong, "
                 << "Answer is : " << c << endl;
            wrong = wrong + 1;
        }
        cout << "Your score is : " << score << endl;

    } 
    cout << "You lost" << endl;
    cout << wrong << " wrong tries, you have lost." << endl;
    return 0;
}
