#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, t, coun = 0;

    scanf("%d", &n);

    int a[n];

    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &t);

    sort(a, a + n);

    for(i = 1; i < n; i++)
    {
        if(i == 1 && ((a[i] - a[i-1]) <= t)) coun += 2;
        else if((a[i] - a[i-1]) <= t) coun++;
        else continue;
    }
    printf("%d\n", coun);

    return 0;
}
