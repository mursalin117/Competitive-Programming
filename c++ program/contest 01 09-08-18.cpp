#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main()
{
    int a,i,s;
    vector < int > v;

    for(i = 0; i < 3; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    s = 0;
    for(i = 0; i < 2; i++)
    {
        s = s + abs(v[i] - v[i+1]);
    }

    cout << s << endl;

    return 0;
}
