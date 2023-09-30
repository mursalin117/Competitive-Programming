#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[500005], i, j, sum;

    for(i = 1; i < 500005; i++)
    {
        sum = 0;
        for(j = 1; j <= (i/2); j++)
        {
            if(i % j == 0) sum += j;
        }
        a[i] = sum;
    }

    int t, n;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &t);
        printf("%d\n", a[t]);
    }
    return 0;
}
