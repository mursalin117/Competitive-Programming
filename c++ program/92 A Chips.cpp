#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, d, i, c;
    scanf("%d%d", &n, &m);
    d = (n * (n+1))/2;
   // cout << d << endl;
    if(m < d)
    {
        for(i = 1; i <= n; i++)
        {
            c = (i*(i+1))/2;
            if(c > m)
            {
                c = (i*(i-1))/2;
                printf("%d\n", m-c);
                break;
            }
        }
    }
    else
    {
        m = m%d;
       // cout << m << endl;
        for(i = 1; i <= n; i++)
        {
            c = (i*(i+1))/2;
           // cout << c << endl;
            if(c > m)
            {
                c = (i*(i-1))/2;
                printf("%d\n", m-c);
                break;
            }
        }
    }
    return 0;
}
