#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int i, n, sum = 0, coun = 0, a, m = 9999999999;
    scanf("%lld", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%lld", &a);
        sum += a;
        if(a % 2 != 0)
        {
            coun++;
            if(m > a) m = a;
        }
    }
    if(coun % 2 == 0) printf("%lld\n", sum);
    else printf("%lld\n", sum - m);

    return 0;
}
