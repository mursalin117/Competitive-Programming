#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, s, c, d;

    scanf("%lld%lld", &n, &s);

    if(n <= s)
    {
        if(s% n == 0) c = s/n;
        else c = s/n + 1;
    }
    else c = 1;

    printf("%lld\n", c);

    return 0;
}
