#include <iostream>

using namespace std;

void addition(int x, int y);

int main()
{
    int a, b;

    cout << "Enter two numbers : " << endl;
    cin >> a >> b;

    addition(a, b);

    return 0;
}

void addition(int x, int y)
{
    int sum = x + y;

    cout << "The sum is " << x << " + " << y << " = " << sum << endl;

}
