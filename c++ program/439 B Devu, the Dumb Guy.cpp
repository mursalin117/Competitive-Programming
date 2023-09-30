#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int i, n, x, sum = 0;
    scanf("%lld%lld", &n, &x);
    long int a[n];
    for(i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    sort(a, a+n);
    for(i = 0; i < n; i++)
    {
        sum += a[i] * x;
        if(x > 1) x--;
        else x = 1;
    }
    printf("%lld\n", sum);
    return 0;
}
