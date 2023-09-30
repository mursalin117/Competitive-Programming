#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int n,s;

    cin >> n;

    while(n >= 0)
    {
        s = 1 + ((n*(n+1))/2);

        cout << s << endl;

        cin >> n;
    }
    return 0;
}
