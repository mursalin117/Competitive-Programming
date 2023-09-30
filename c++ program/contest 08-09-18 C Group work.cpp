#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s, t;

    cin >> n;

    t = pow(2, n);

    s = t - 1 - n;

    cout << s << endl;

    return 0;
}
