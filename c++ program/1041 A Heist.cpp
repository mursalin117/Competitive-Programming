#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, i, x, sum = 0;
    vector <long int> v;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    for(i = 0; i < (n-1); i++)
    {
       // cout << v[i] << endl;
        x = v[i+1] - v[i];
       // cout << x << endl;
        if(x >= 2)
        {
            x -= 1;
            //cout << x << endl;
            sum += x;
        }
    }
    cout << sum << endl;

    return 0;
}
