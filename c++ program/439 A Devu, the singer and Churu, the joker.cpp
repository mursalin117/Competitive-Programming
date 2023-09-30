#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,d,s = 0,j,x,c;

    cin >> n >> d;

    for(i = 0; i < n; i++)
    {
        cin >> x;
        s = s + x;
    }
    c = s;
    x = 10 * (n-1);
    s = s + x;
    if(s > d) cout << "-1" << endl;
    else cout << (d - c)/5 << endl;

    return 0;
}
