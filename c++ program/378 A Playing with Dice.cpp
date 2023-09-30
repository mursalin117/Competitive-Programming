#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, c1 = 0, c2 = 0, c3 = 0, a, b, d1, d2;
    scanf("%d%d", &a, &b);
    for(i = 1; i < 7; i++)
    {
        d1 = abs(i - a);
        d2 = abs(i - b);
        if(d1 < d2) c1++;
        else if(d1 > d2) c3++;
        else c2++;
    }
    printf("%d %d %d\n", c1, c2, c3);
    return 0;
}
