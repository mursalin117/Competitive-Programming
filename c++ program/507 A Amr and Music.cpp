#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, coun = 0, i, d = 0;
    scanf("%d%d", &n, &k);
    int a[n];
    map <int, int> mp;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        mp[a[i]] = i;
    }
    sort(a, a+n);
    for(i = 0; i < n; i++)
    {
        d += a[i];
        if(d <= k) coun++;
        else break;
    }
    printf("%d\n", coun);
    for(i = 0; i < coun; i++)
        printf("%d ", mp[a[i]]+1);
    return 0;
}
