#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, L, v, l, r, s, com;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%d%d%d", &L, &v, &l, &r);

        s = L / v;
        com = (r / v) - ((l - 1)/ v);

        printf("%d\n", s - com);
    }
    return 0;
}
