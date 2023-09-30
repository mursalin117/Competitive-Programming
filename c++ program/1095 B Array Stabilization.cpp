#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, s;
    scanf("%d", &n);
    int a[n];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    if(n <= 2) printf("0\n");
    else
    {
        sort(a, a+n);
        s = min(a[n-1]-a[1], a[n-2]-a[0]);
        printf("%d\n", s);
    }
    return 0;
}
