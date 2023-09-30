#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long k, i;
    scanf("%lld", &k);
    if(k > 36) printf("-1\n");
    else
    {
        for(i = 0; i < k/2; i++) printf("8");
        if(k % 2 != 0) printf("4");
    }
    return 0;
}
