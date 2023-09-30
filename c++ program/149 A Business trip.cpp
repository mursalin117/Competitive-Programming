#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,s = 0,i,x;
    vector < int > v;

    cin >> k;

    for(i = 0; i < 12; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    if(k == 0) cout << "0" << endl;
    else
    {
        for(i = 0; i < 12; i++)
        {
            s = s + v[12-1-i];
            if(s >= k)
            {
                cout << i+1 << endl;
                return 0;
            }
        }
        cout << "-1" << endl;
    }
    return 0;
}
