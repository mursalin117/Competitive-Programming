#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, s, i, m;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &a);
        s = 0;
        m = 1;
        for(i = 1; ; i++)
        {
            m = m * 5;
            s += a/m;
            if(m > a) break;
        }
        printf("%d\n", s);
    }
    return 0;
}
