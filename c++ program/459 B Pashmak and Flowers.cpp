#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int n,i,x,coun_min = 0,coun_max = 0,s,d;
    vector <unsigned long long int> v;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    for(i = 0; i < n; i++)
    {
        if(v[i] == v[0]) coun_min++;
        if(v[n-1-i] == v[n-1]) coun_max++;
    }
    d = v[n-1] - v[0];
    if(coun_min == n) s = (n * (n - 1))/2;
    else s = coun_max * coun_min;
    cout << d << " " << s << endl;

    return 0;
}
