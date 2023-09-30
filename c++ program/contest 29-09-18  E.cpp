#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test, n, t, p, m, s;

    scanf("%d", &test);

    while(test--)
    {
        scanf("%d%d%d", &n, &t, &p);
        m = t - (p * (n -1));
        s = ((m - p) + 1) * n;
        printf("%d\n", s);
    }
    return 0;
}
