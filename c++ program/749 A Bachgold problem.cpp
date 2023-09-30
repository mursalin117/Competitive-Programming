#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,d,i;

    cin >> n;

    if(n%2 == 0)
    {
        d = n/2;
        cout << d << endl;
        for(i = 0; i < (d-1); i++) cout << 2 << " ";

        cout << 2 << endl;
    }
    else
    {
        d = (n/2) - 1;
        cout << d + 1 << endl;
        for(i = 0; i < d; i++) cout << 2 << " ";

        cout << 3 << endl;
    }
    return 0;
}
