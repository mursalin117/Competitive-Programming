#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long prime[100000], t = 1000000;

void sieve()
{
    long long i, j;

    for(i = 2; i < t; i++)
    {
        if(prime[i] == 0)
        {
            for(j = 2; i * j < t; j++) prime[i*j] = 1;
        }
    }

    for(i = 2; i < t; i++)
    {
        if(prime[i] != 1) prime[i] = i;
        else continue;
    }
}

int main()
{
    long long n, root, i;

    scanf("%lld", &n);
    sieve();
    //root = sqrt(n);

    for(i = 2; i * i <= n && prime[i] != 0; i++)
    {
        if(n % i == 0) printf("%lld\n", prime[i]);
        while(n % i == 0)
        {
            n /= i;
        }
    }
    if(n > 1) printf("%lld\n", n);
    return 0;
}
