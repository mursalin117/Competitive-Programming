#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d1, d2, r, t;

    while(scanf("%d%d%d", &a, &b, &c))
    {
        if(a == 0 && b == 0 && c == 0) break;
        d1 = b - a;
        d2 = c - b;
        if(d1 == d2) printf("AP %d\n", (c + d1));
        else
        {
            r = b / a;
            printf("GP %d\n", (c * r));
        }
    }
    return 0;
}
