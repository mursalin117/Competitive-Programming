#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, i, coun = 0, m;
    scanf("%lld", &n);
    if(n % 2 == 0) printf("%lld\n", n/2);
    else
    {
        while(n != 0)
        {
            for(i = 2; i * i < n; i++)
            {
                if(n % i == 0)
                {
                    n -= i;
                    coun++;
                    break;
                }
            }
            if(i * i == n) coun++;
        }
        if(coun > 0) printf("%lld\n", coun);
        else printf("1\n");
    }
    return 0;
}
