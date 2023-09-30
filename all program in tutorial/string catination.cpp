#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b, c;

    cin >> a;
    cin >> b;

    c = a + b;

    cout << "This is string c = " << c << '\n';

    a = "marakha";
    b = " koilam na marakha ";

    cout << "This is a + b = " << a + b << endl;

    a = "Faltu";
    b = "Shimu";
    a = a + ' ';

    cout << "This is a = " << a << "then b = " << b << endl;

    a = "Sexy";
    b = "Shila";
    a = a + ' ' + b;

    cout << "This is now a = " << a << endl;

    return 0;
}
