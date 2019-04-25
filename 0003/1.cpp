#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
// Program for adding two integers, sum range: -2147483648 to 2147483647
int main(int argc, char const *argv[])
{
    srand(time(NULL));

    cout << "value adder by Harris..." << endl;
    int a = rand() % 100;
    int b = rand() % 100;
    int c;
    c = a + b;
    cout << a << " + " << b << " = " << c << endl;
    return 0;
}
