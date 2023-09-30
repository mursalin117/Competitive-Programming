#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long n, m, sum = 0, i;
    scanf("%ld%ld", &n, &m);
    long a[n];
    for(i = 0; i < n; i++)
        scanf("%ld", &a[i]);
    sort(a, a+n);
    for(i = 0; i < m; i++)
    {
        if(a[i] < 0) sum += abs(a[i]);
    }
    printf("%ld\n", sum);
    return 0;
}
