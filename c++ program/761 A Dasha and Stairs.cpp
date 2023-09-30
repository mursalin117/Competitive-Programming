#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    if(a == 0 && b == 0) printf("NO\n");
    else
    {
        c = abs(a - b);
        if(c > 1) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
