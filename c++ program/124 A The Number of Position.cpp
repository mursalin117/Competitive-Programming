#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, s;
    scanf("%d%d%d", &n, &a, &b);
    s = abs(n - a);
    for( ; ; )
    {
        if(s-1 <= b) break;
        else s--;
    }
    printf("%d\n", s);
    return 0;
}
