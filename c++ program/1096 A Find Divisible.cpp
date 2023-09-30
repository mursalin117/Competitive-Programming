#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, l, r;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d%d", &l, &r);
        if(r % l == 0) printf("%d %d\n", l, r);
        else printf("%d %d\n", l, 2 * l);
    }
    return 0;
}
