#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a1,a2,a3,b1,b2,b3,s1,s2,s,n,d1,d2;

    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;

    s1 = a1 + a2 + a3;
    s2 = b1 + b2 + b3;

    if(s1%5 == 0) d1 = s1/5;
    else d1 = (s1/5) + 1;

    if(s2%10 == 0) d2 = s2/10;
    else d2 = (s2/10) + 1;

    s = d1 + d2;

    if(s <= n) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
