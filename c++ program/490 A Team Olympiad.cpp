#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, t, coun;
    scanf("%d", &n);
    int a1[n], a2[n], a3[n], p = 0, q = 0, r = 0;
    for(i = 0; i < n; i++)
    {
        scanf("%d", &t);
        if(t == 1) { a1[p] = i+1; p++; }
        else if(t == 2) { a2[q] = i+1; q++; }
        else { a3[r] = i+1; r++; }
    }
    coun = min(p, q);
    coun = min(coun, r);
    printf("%d\n", coun);
    p = 0;
    for(i = 0; i < coun; i++)
    {
        printf("%d %d %d\n", a1[p], a2[p], a3[p]);
        p++;
    }
    return 0;
}
