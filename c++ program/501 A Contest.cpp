#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    double p1,p2,m,v;

    cin >> a >> b >> c >> d;

    p1 = (3.0 * (double)a)/10.0;
    p2 = (double)a - (((double)a/250.0) * (double)c);
    m = max(p1, p2);

    p1 = (3.0 * (double)b)/10.0;
    p2 = (double)b - (((double)b/250.0) * (double)d);
    v = max(p1, p2);

    if(m == v) cout << "Tie" << endl;
    else if(m > v) cout << "Misha" << endl;
    else cout << "Vasya" << endl;

    return 0;
}
