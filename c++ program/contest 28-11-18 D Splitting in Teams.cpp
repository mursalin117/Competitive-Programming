#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, count1 = 0, count2 = 0, d;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] == 1) count1++;
        else count2++;
    }
    if(count1 > 0 && count2 == 0) d = count1/3;
    else;
    {
        d = min(count1, count2);
        d = d + (count1 - d)/3;
    }
    printf("%d\n", d);
    return 0;
}
