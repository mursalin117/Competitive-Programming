#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int a[105];

int main()
{
    int n, i, m = 0, d;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &d);
        a[d]++;
        if(a[d] > m) m = a[d];
    }
    printf("%d\n", m);
    return 0;
}
