#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m1, m2, m3, m4, i;

    scanf("%d", &n);

    int a[n+2];

    for(i = 1; i <= n; i++) scanf("%d", &a[i]);

    for(i = 1; i <= n; i++)
    {
        m1 = i;
        m2 = a[m1];
        m3 = a[m2];
        m4 = a[m3];

        if(m4 == m1)
        {
            printf("YES\n");
            return 0;
        }
        else continue;
    }
    printf("NO\n");

    return 0;
}
