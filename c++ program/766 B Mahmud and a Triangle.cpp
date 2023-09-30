#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n,i,a,b,c,x;
    vector <long int> v;

    cin >> n;

    for(i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());

    a = v[n-3];
    b = v[n-2];
    c = v[n-1];
    if((a+b > c) && (b+c > a) && (a+c > b)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
