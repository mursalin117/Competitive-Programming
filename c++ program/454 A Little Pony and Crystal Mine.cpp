#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,m,d,s;

    cin >> n;

    m = (n/2) + 1;
    for(i = 1; i <= n; i++)
    {
        if(i <= m)
        {
            d = m - i;
            for(j = 0; j < d; j++) cout << "*";
            s = (2 * i) - 1;
            for(j = 0; j < s; j++) cout << "D";
            for(j = 0; j < d; j++) cout << "*";
        }
        else
        {
            d = i - m;
            for(j = 0; j < d; j++) cout << "*";
            s = n - i + 1;
            s = (s * 2) - 1;
            for(j = 0; j < s; j++) cout << "D";
            for(j = 0; j < d; j++) cout << "*";
        }
        cout << endl;
    }
    return 0;
}
