#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[1005], t, n, i, j, s = 0;

    for(i = 1; i < 1005; i++)
    {
        for(j = 1; j * j < i; i++)
        {
            if(i % j == 0) a[i] += 2;
        }
        if(j * j == i) a[i]++;
    }
    sort(a, a + 1005);

    scanf("%d", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        printf("Case %d: %d\n", i, a[n]);
    }
    return 0;
}
