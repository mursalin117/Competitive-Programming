#include <iostream>
#include <bits/stdc++.h>

double a[1000001];

using namespace std;

int main()
{
    long int i, j, n, base, t;
    double s, b;

    for(i = 1; i < 1000001; i++)
    {
        a[i] = a[i-1] + log(i + 0.0);
    }
   // cout << a[1000000] << endl;
    scanf("%ld", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%ld%ld", &n, &base);

        b = (double)base;
        //cout << b << endl;
        //cout << a[n] << endl;
        s = (a[n] / log(b));

        printf("Case %d: %ld\n", i, (long int)s + 1);
    }
    return 0;
}
