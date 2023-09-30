#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, i, sum, a, coun = 0;
    char ch;

    scanf("%lld%lld", &n, &sum);
    getchar();
    for(i = 0; i < n; i++)
    {
        scanf("%c%lld", &ch, &a);
        getchar();
        if(ch == '+') sum += a;
        else
        {
            if(sum >= a) sum -= a;
            else coun++;
        }
    }
    printf("%lld %lld", sum, coun);

    return 0;
}
