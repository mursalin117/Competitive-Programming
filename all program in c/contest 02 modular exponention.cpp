#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m,x,y;
    cin >> n >> m;
    x = pow(2, n);
    y = m%x;
    cout << y << endl;
    return 0;
}
