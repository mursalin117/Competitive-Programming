#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,d,s,n,t;
    cin >> n;
    t = (n/2) + 1;
    for(i = 1; i <= n; i++)
    {
        if(i <= t)
        {
            d = t - i;
            for(j = 1; j <= d; j++) cout << "*";

            s = (2 * i) - 1;
            for(j = 1; j <= s; j++) cout << "D";

            for(j = 1; j <= d; j++) cout << "*";
        }
        else
        {
            d = i - t;
            for(j = 1; j <= d; j++) cout << "*";

            s = n - i + 1;
            s = (s * 2) - 1;
            for(j = 1; j <= s; j++) cout << "D";

            for(j = 1; j <= d; j++) cout << "*";
        }
        cout << endl;
    }
    return 0;
}
