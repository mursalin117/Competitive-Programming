#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, d, a, b;
    scanf("%d%d", &n, &m);
    if(n >= (2 * m) || m >= (2 * n)) d = min(n, m);
    else if(n == m && n == 1) d = n/2;
    else if(n > m && n < (2 * m))
    {
        a = n / 2;
        n = n - (a * 2);
        m = m - a;
        d = a + min(n, m/2);
    }
    else
    {
        a = m / 2;
        m = m - (a * 2);
        n = n - a;
        d = a + min(n/2, m);
    }
    printf("%d\n", d);
    return 0;
}
