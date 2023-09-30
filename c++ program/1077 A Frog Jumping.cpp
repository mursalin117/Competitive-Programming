#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t, r, l, n, d;
    scanf("%lld",  &t);
    while(t--)
    {
        scanf("%lld%lld%lld", &r, &l, &n);
        if(n % 2 == 0) d = (r-l) * (n/2);
        else d = d = (r-l) * (n/2) + r;
        printf("%lld\n", d);
    }
    return 0;
}
