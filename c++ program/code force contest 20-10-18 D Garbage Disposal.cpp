#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int i, n, sum, k;

    scanf("%I64d%I64d", &n, &k);

    long long int a[n];

    for(i = 0; i < n; i++) scanf("%I64d", &a[i]);

    for(i = 0; i < n; i++)
    {
        if(i == 0)
        {
            sum += a[i] / k;
            if(a[i] % k != 0) sum++;
        }
        else if(i == (n - 1))
        {

        }
        else
        {

        }
    }
}
