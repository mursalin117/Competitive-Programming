#include <iostream>
#include <cstdio>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i;
    int m, j, sum;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        scanf("%d", &m);

        sum = 0;
        for(j = 1; j <= (m/2); j++)
        {
            if(m % j == 0) sum += j;
        }
        printf("%d\n", sum);
    }
    return 0;
}
