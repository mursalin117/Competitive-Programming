#include <iostream>

using namespace std;

int main()
{
    int x, y, sum, sub, multiply, divide;

    cout << "Enter your first number : ";
    cin >> x;
    cout << "Enter your second number : ";
    cin >> y;

    sum = x + y;
    cout << "The summation is x + y = " << sum << endl;

    sub = x - y;
    cout << "The difference is x - y = " << sub << endl;

    multiply = x * y;
    cout << "The multiplication is x * y = " << multiply << endl;

    if(y == 0)
    {
        cout << "The division is undefined." << endl;

        return 0;
    }
    else
    {
        divide = x/y;

        cout << "The division is x / y = " << divide << endl;

    }

    return 0;
}
