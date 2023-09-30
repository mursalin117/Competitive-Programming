#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long int a[1000005];

int main()
{
    long long int n, i, sum, t, j;

    for(i = 1; i < 1000000; i++)
    {
        sum = 0;
        if(i == 1) a[i] = 1;
        else if(i == 2) a[i] = 3;
        else
        {
            if(i % 2 == 0)
            {
                sum += i;
                for(j = 2; j <= i/2; j++) sum += (i/j);

                sum += (i/2);
                a[i] = sum;
            }
            else
            {
                sum += i;
                for(j = 2; j <= (i/2)+1; j++) sum += (i/j);

                sum += (i/2);
                a[i] = sum;
            }
        }
    }

    scanf("%lld", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%lld", &n);
        printf("Case %lld: %lld\n", i, a[n]);
    }

    return 0;
}
