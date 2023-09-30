#include <iostream>
#include <bits/stdc++.h>

typedef long long int ll;
ll a[100005], ans[100005];

using namespace std;

int main()
{
    ll i, j, n, x, sum = 0;

    scanf("%I64d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%I64d", &x);
        a[x]++;
        sum += x;
    }
    for(i = 0; i < 100001; i++)
    {
        if(i == 0) ans[i] = 0;
        else if(i == 1) ans[i] = a[i];
        else
        {
            ans[i] = max(ans[i-1], ans[i-2] + (a[i] * i));
        }
    }
    printf("%I64d\n", ans[100000]);

    return 0;
}

