#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, counL = 0, counR = 0, d1, d2;
    scanf("%d", &n);
    int l[n], r[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d%d", &l[i], &r[i]);
        if(l[i] == 0) counL++;
        if(r[i] == 0) counR++;
    }
    d1 = min(counL, n-counL);
    d2 = min(counR, n-counR);
    printf("%d\n", d1 + d2);
    return 0;
}
