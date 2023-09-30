#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a[105];

int main()
{
    int n, i, j, r, m = 0, x;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &r);

        for(j = 0; j < r; j++)
        {
            scanf("%d", &x);
            a[x]++;
            if(a[x] > m) m = a[x];
        }
    }
    for(i = 1; i <= 100; i++)
    {
        if(a[i] == m) printf("%d ", i);
    }
    return 0;
}
