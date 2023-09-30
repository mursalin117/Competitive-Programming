#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, v, i, j, s, p, coun = 0;
    scanf("%d%d", &n, &v);
    int a[n];
    for(i = 0; i < n; i++)
    {
        a[i] = 0;
        scanf("%d", &s);
        for(j = 0; j < s; j++)
        {
            scanf("%d", &p);
            if(p < v)
            {
                if(a[i] == 0) coun++;
                a[i] = i + 1;
            }
            else continue;
        }
    }
    printf("%d\n", coun);
    for(i = 0; i < n; i++)
    {
        if(a[i] > 0) printf("%d ", a[i]);
    }
    return 0;
}
