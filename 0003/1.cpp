#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Program for adding two integers, sum range: -2147483648 to 2147483647
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    cout << "Sum guessing game by Harris..." << endl;
    int score = 0;
    int wrong = 0;
    do
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
            cout << "You are correct" << endl;
        else
            cout << "You are wrong, "
                 << "Answer is : " << c << endl;
        if (guess == c)
            score = score + 1;
        else
            wrong = wrong + 1;
        cout << "Your score is : " << score << endl;

    } while (wrong != 3);
    cout << "You lost" << endl;
    cout << "3 wrong tries, you have lost." << endl;
    return 0;
}
