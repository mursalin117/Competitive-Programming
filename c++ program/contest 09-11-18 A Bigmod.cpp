#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long power(long long n, long long r, long long m);

int main()
{
    long long b, p, mod, sum;

    while(scanf("%lld%lld%lld", &b, &p, &mod) != EOF)
    {
        sum = power(b, p, mod);

        printf("%lld\n", sum);
    }

    return 0;
}

long long power(long long n, long long r, long long m)
{
    if(r == 0) return 1;
    else if(r == 1) return n%m;
    if(r%2 == 1) return ((power(n, r-1, m) *n)%m);
    else
    {
        long long x = power(n, (r/2), m)%m;
        return (x * x)%m;
    }
}

