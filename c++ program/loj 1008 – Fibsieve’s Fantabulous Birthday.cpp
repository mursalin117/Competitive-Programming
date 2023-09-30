#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, c, r, s, d, f, t, i;

    scanf("%ld", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%ld", &n);

        d = sqrt(n);
        if((d * d) == n)
        {
            if(d % 2 == 0) { c = d; r = 1; }
            else{ c = 1; r = d; }
        }
        else
        {
            d = d + 1;
            f = (d - 1) * (d - 1);
            s = n - f;
            if(s == d) { c = d; r = c; }
            else if(s < d)
            {
                if(d % 2 == 0) { c = s; r = d; }
                else { c = d; r = s; }
            }
            else
            {
                if(d % 2 == 0) { c = d; r = (d * d) - n + 1; }
                else { c = (d * d) - n + 1; r = d; }
            }
        }
        printf("Case %ld: %ld %ld\n", i, c, r);
    }
    return 0;
}
