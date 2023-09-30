#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, m, i, j, a, b, coun = 0;
    scanf("%ld%ld", &n, &m);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%ld%ld", &a, &b);
            if(a == 1 || b == 1) coun++;
        }
    }
    printf("%ld\n", coun);

    return 0;
}
