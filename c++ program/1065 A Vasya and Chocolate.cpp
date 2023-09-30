#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int s, a, b, c, t, i, sum, numBar, numExtra;

    scanf("%I64d", &t);

    while(t--)
    {
        scanf("%I64d%I64d%I64d%I64d", &s, &a, &b, &c);

        numBar = s / c;
        numExtra = (numBar / a) * b;
        sum = numBar + numExtra;

        printf("%I64d\n", sum);
    }
    return 0;
}
