#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, x, coun, q, j;

    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    sort(a, a+n);

    scanf("%d", &q);

    for(i = 0; i < q; i++)
    {
        scanf("%d", &x);
        coun = 0;
        for(j = 0; j < n; j++)
        {
            if(x >= a[j]) coun++;
            else break;
        }
        printf("%d\n", coun);
    }
    return 0;
}
