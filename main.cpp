#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << x << "+" << y << "=" << x + y << endl;
    cout << x << "-" << y << "=" << x - y << endl;
    cout << x << "*" << y << "=" << x * y << endl;
    // cout << x << "/" << y << "=" << x / y << endl;
    cout << x << "/" << y << "=" << x / y << " with a remainder of " << x % y << endl;
    cout << "Square Root of " << x << " is " << sqrt(x) << endl;
    cout << x << "^" << y << "=" << pow(x, y) << endl;
    return 0;
}
