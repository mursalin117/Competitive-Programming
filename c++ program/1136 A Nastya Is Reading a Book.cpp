#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, i, coun = 0;
    scanf("%d", &n);
    int l[n], r[n];
    for(i = 0; i < n; i++)
        scanf("%d%d", &l[i], &r[i]);
    scanf("%d", &k);
    for(i = 0; i < n; i++)
    {
        if(l[i] <= k && k <= r[i]) break;
        else coun++;
    }
    printf("%d\n", n-coun);
    return 0;
}
