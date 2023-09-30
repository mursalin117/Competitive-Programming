#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a[105];

int main()
{
    int n, m, i, coun = 0, s, b;
    scanf("%d%d", &n, &m);
    while(n--)
    {
        scanf("%d", &s);
        for(i = 0; i < s; i++)
        {
            scanf("%d", &b);
            a[b]++;
        }
    }
    for(i = 1; i <= m; i++)
    {
        if(a[i] > 0) coun++;
    }
    if(coun == m) printf("YES\n");
    else printf("NO\n");
    return 0;
}
