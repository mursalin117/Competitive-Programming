#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long n, i, k, coun = 0;
    vector <unsigned long long> v;

    cin >> n >> k;

    for(i = 1; i <= (n/2)+1; i++)
    {
        if(n%i == 0)
        {
            v.push_back(i);
            coun++;
        }
    }
    v.push_back(n);
    coun++;

    if(k <= coun)
    {
        cout << v[k-1] << endl;
    }
    else cout << -1 << endl;

    return 0;
}
