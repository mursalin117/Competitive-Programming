#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, m, i, d1, d2;
    scanf("%d", &t);

    for(i = 0; i < t; i++)
    {
        scanf("%d%d", &n, &m);
        d1 = n/3;
        d2 = m/3;
        printf("%d\n", d1 * d2);
    }
    return 0;
}
