#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int m, x, s, t;

    scanf("%ld%ld", &m, &x);

    while(m != 0)
    {
        if(x == 100) printf("Not found\n");
        else
        {
            s = (100 * (m - 1)) / (100 - x);
            if((100 * (m - 1)) % (100 - x) == 0) s -= 1;
            else s = s;

            if(s > (m - 1)) printf("%ld\n", s);
            else printf("Not found\n");
        }
        scanf("%ld%ld", &m, &x);
    }
    return 0;
}
