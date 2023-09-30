#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   long int n,i,x,s;
    vector <long int> v;

    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    s = 0;
    for(i = 0; i < n; i++)
    {
        x = pow(2,i);
        s = s + (v[i] * x);
    }
    cout << s << endl;

    return 0;
}
