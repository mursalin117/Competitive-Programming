#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, m, coun = 0, s = 0;
    scanf("%d%d", &n, &m);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a+n);
    for(i = n-1; i >= 0; i--)
    {
        s += a[i];
        if(s >= m) { coun++; break; }
        else coun++;
    }
    printf("%d\n", coun);
    return 0;
}
