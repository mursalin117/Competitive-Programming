#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, f, t, k, c, d, i;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++)
    {
        scanf("%d%d", &f, &t);
        if(i == 0)
        {
            if(t > k) c = f - (t - k);
            else c = f;
        }
        else
        {
            if(t > k) d = f - (t - k);
            else d = f;
            c = max(c, d);
        }
    }
    printf("%d\n", c);
    return 0;
}
