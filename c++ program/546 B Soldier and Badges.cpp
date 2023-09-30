#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,s = 0,x,d;
    vector < int > v,a;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    for(i = 1; i < n; i++)
    {
        x = v[i -1];
        if(v[i] <= x)
        {
            if(x == v[i])
            {
                v[i] = v[i] + 1;
                s = s + abs(v[i] - v[i-1]);
            }
            else if(x > v[i])
            {
                d = abs(v[i] - v[i-1]);
                v[i] = v[i-1] + 1;
                s = s + d + abs(v[i] - v[i-1]);
            }
        }
    }
    cout << s << endl;

    return 0;
}
