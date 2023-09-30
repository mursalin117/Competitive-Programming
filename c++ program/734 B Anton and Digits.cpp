#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k2,k3,k5,k6,s = 0,m;

    cin >> k2 >> k3 >> k5 >> k6;

    m = k2;
    if(m > k5) m = k5;
    if(m > k6) m = k6;

    s = s + m * 256;

    k2 = k2 - m;
    k5 = k5 - m;
    k6 = k6 - m;

    m = k2;
    if(m > k3) m = k3;


    s = s + m * 32;

    cout << s << endl;

    return 0;
}
