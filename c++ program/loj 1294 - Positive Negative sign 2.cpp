#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, sum, m, t, i;

    scanf("%ld", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%ld%ld", &n, &m);

        sum = (n / 2) * m;

        printf("Case %ld: %ld\n", i, sum);
    }
    return 0;
}
