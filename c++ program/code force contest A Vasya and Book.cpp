#include <isotream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, x, y, d, i, a, s, m1, m2, ;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d%d%d", &n, &x, &y, &d);
        a = abs(x-y);
        if(a % d == 0) s = a/d;
        else
        {
            m1 = 0;
            for( ; ; )
            {
                 x += d;
                if(x == y) { m1++, break; }
                else if(x >= n)
                {
                    m1++;
                    x = n;
                    if(x == y) break;
                    for( ; ; )
                    {
                        x -= d;
                        m1++;
                        if(x == y) { m1++; break; }
                    }
                    break;
                }
            }
        }
    }
    return 0;
}
