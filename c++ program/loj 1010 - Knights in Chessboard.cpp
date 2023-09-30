#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int t, i, n, m, s;

    scanf("%ld", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%ld%ld", &n, &m);

        if(n == 1 || m == 1) printf("Case %ld: %ld\n", i, (n * m));

    }
}
