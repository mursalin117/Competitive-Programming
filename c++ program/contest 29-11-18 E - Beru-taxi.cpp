#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, n, i, d1, d2;
    double m = 1000.000, t, d;
    scanf("%d%d%d",  &a, &b, &n);
    int x[n], y[n], v[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d%d%d", &x[i], &y[i], &v[i]);
        d1 = abs(a - x[i]) * abs(a - x[i]);
        d2 = abs(b - y[i]) * abs(b - y[i]);
        d = (double)sqrt(d1 + d2);
        cout << d << endl;
        t = d / (double)v[i];
        cout << t << endl;
        if(m > t)
        {
            //cout << m << endl;
            m = t;
            //cout << m << endl;
        }
    }
    //cout << m << endl;
    printf("%lf\n", m);
    return 0;
}
