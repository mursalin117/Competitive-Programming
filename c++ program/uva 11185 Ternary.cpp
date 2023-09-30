#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    long long  n,m,i;

    cin >> n;

    while(n >= 0)
    {
        vector < long long int > v;
        if(n == 0) cout << n << endl;
        else
        {
            while(n > 0)
            {
                m = n%3;
                v.push_back(m);
                n = n/3;
            }
            reverse(v.begin(), v.end());
            for(i=0; i<v.size(); i++)
            {
                cout << v[i];
            }
            cout << endl;
        }
        cin >> n;

    }
    return 0;
}
