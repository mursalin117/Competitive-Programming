#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, m, i, s, d1, d2;
    scanf("%ld%ld", &n, &m);
    long int  a[n], p[n];
    for(i = 0; i < n; i++)
    {
        scanf("%ld", &a[i]);
        if(i == 0)
        {
            p[i] = a[i];
            s = p[i] / m;
        }
        else
        {
            p[i] = a[i] + p[i-1];
            d1 = p[i-1]/m;
            d2 = p[i]/m;
            s = abs(d2 - d1);
        }
        printf("%ld\n", s);
    }
    return 0;
}
