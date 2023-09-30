#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, s, n, m, d, c;

    while(scanf("%d%d", &n, &m))
    {
        if(n == 0 && m == 0) break;
        else if(n != 0 && (m == 0 || m == n)) printf("1\n");
        else
        {
            s = 1;
            if(m <= n/2)
            {
                if(n % 2 == 0 && m % 2 == 0)
                {
                    for(i = m, j = n; i >= 1; i++, j--)
                    {
                        s *= ((j - i + 1) / i);
                        cout << s << endl;
                    }
                }
                else if(n % 2 != 0 && m % 2 == 0)
                {
                    for(i = 1, j = n; i <= m; i++, j--)
                    {
                        s *= ((j - i + 1) / i);
                        cout << s << endl;
                    }
                }
            }
            else
            {
                m = (n - m);
                for(i = 1, j = n; i <= m; i++, j--)
                 {
                     s = (j - i + 1);
                    d = i;
                    c *= (s/d);
                    cout << c << " " << s << " " << d <<endl;
                 }
            }
            printf("%d\n", c);
        }
    }
    return 0;
}
