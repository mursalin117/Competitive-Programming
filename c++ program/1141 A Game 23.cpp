#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, count2 = 0, count3 = 0, d;
    scanf("%d%d", &n, &m);
    if(m % n != 0) printf("-1\n");
    else if(n == m) printf("0\n");
    else
    {
        if(m % 2 == 0 || m % 3 == 0)
        {
            d = m/n;
            while(d % 2 == 0)
            {
                d /= 2;
                if(d == 0) break;
                count2++;
            }
            while(d % 3 == 0)
            {
                d /= 3;
                if(d == 0) break;
                count3++;
            }
            printf("%d\n", count2 + count3);
        }
        else printf("-1\n");
    }
    return 0;
}
