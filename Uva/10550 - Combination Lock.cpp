#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, td;
    while(scanf("%d%d%d%d", &a, &b, &c, &d))
    {
        if(a == 0 && b == 0 && c == 0 && d == 0) break;
        else
        {
            if(b <= a)td = abs(a - b);
            else td = abs(40 - b) + a;
            if(c >= b) td += abs(b - c);
            else td += abs(40 - b) + c;
            if(d <= c) td += abs(c - d);
            else td += abs(40 - d) + c;
            td *= 9; // as (360 / 4) = 9
            printf("%d\n", td + 1080);
        }
    }
    return 0;
}
