#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n, m, sum , t, i, j, d, com;

    scanf("%ld", &t);

    for(i = 1; i <= t; i++)
    {
        scanf("%ld%ld", &n, &m);

        if(m == 1) printf("Case %ld: %ld\n", i, n/2);
        else
        {
            sum = 0;
            for(j = 1; (m * j) <= n; j++)
            {
                if(j == 1)
                {
                    d = ((m * j) * ((m * j) + 1)) / 2;
                    sum -= d;
                }
                else
                {
                    if(j % 2 == 0)
                    {
                        d = ((m * j) * ((m * j) + 1)) / 2;
                        com = ((m * (j-1)) * ((m * (j-1)) + 1)) / 2;
                        sum += (d - com);
                    }
                    else
                    {
                        d = ((m * j) * ((m * j) + 1)) / 2;
                        com = ((m * (j-1)) * ((m * (j-1)) + 1)) / 2;
                        sum -= (d - com);
                    }
                }
            }
            printf("Case %ld: %ld\n", i, sum);
        }
    }
    return 0;
}
