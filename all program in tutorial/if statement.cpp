#include <iostream>

using namespace std;

int main()
{
    int x = 10, y = 20;

    if(x < y) cout << "1st : It is executing." << endl;

    x *= 2;

    if(x <= y) cout << "2nd : It is executing." << endl;
    if(x >= y) cout << "3rd : It is executing." << endl;

    x *= 2;

    if(x <= y) cout << "4th : It is not executing." << endl;

    return 0;
}
