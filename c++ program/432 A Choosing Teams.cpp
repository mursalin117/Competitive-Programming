#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,coun = 0,k,x,s;
    vector <int> v;

    cin >> n >> k;

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    for(int i = 1; i <= (n/3) ; i++)
    {
        x = (3 * i) - 1;
        s = 5 - v[x];
        if(s >= k) ++coun;
        if(x >= n) break;
    }
    cout << coun << endl;

    return 0;
}
