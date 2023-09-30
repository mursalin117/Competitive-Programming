#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l, r, k, coun = 0, i;
    scanf("%d%d%d", &l, &r, &k);
    for(i = l; i <= r; i++)
    {
        if(i % k == 0) coun++;
    }
    printf("%d\n", coun);
    return 0;
}
