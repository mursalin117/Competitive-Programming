#include <iostream>
#include <bits/stdc++.h>

using namespace std;

unsigned long long a[100009];

int main()
{
     unsigned long long t, i, n, j;
     scanf("%llu", &t);
     for(i = 1; i <= t; i++)
     {
         scanf("%llu%llu%llu%llu%llu%llu%llu", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &n);
         for(j = 6; j <= n; j++)
         {
             //printf("%lld %lld %lld %lld %lld %lld\n", a[j-6], a[j-5], a[j-4], a[j-3], a[j-2], a[j-1]);
             if(j == n)
             {
                 a[j] = a[j-1] % n + a[j-2] % n + a[j-3] % n + a[j-4] % n + a[j-5] % n + a[j-6] % n;
             }
             a[j] = a[j-1] + a[j-2] + a[j-3] + a[j-4] + a[j-5] + a[j-6];
         }
         printf("Case %llu: %llu\n", i, a[n] % 10000007);
     }
     return 0;
}
